#include <iostream>
#include <string>
#include <algorithm>

template <typename T>


class Box {
    private:
        T value;

    public:
        Box(T& value) : value(value) {}

        T& getValue() {
            return value;
        }

        void setValue(T& value) {
            this->value = value;
        }
};

int main() {
    int a = 21;
    Box<int> boxA(a);
    std::cout << "Value of boxA: " << boxA.getValue() << std::endl;

    float b = 21.42;
    Box<float> boxB(b);
    std::cout << "Value of boxB: " << boxB.getValue() << std::endl;

    std::string c = "Hello";
    Box<std::string> boxC(c);
    std::cout << "Value of boxC: " << boxC.getValue() << std::endl;

    return 0;
}