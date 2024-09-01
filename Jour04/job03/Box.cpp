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
    int* ptr_a = new int(42);
    boxA.setValue(*ptr_a);
    std::cout << "Value of boxA: " << boxA.getValue() << std::endl;

    float b = 21.42;
    Box<float> boxB(b);
    std::cout << "Value of boxB: " << boxB.getValue() << std::endl;
    float* ptr_b = new float(42.21);
    boxB.setValue(*ptr_b);
    std::cout << "Value of boxB: " << boxB.getValue() << std::endl;

    std::string c = "Hello";
    Box<std::string> boxC(c);
    std::cout << "Value of boxC: " << boxC.getValue() << std::endl;
    std::string* ptr_c = new std::string("World");
    boxC.setValue(*ptr_c);
    std::cout << "Value of boxC: " << boxC.getValue() << std::endl;

    delete ptr_a;
    delete ptr_b;
    delete ptr_c;
    return 0;
}