#include <iostream>
#include <string>
#include <algorithm>

namespace MyNamespace {
    template <typename T>
    T max(const T& a, const T& b) {
        if (a > b) {
            return a;
        } else {
            return b;
        }
    }
}

int main() {
    int a = 21;
    int b = 42;
    std::cout << "Max of " << a << " and " << b << " is " << MyNamespace::max(a, b) << std::endl;

    float c = 21.42;
    float d = 42.21;
    std::cout << "Max of " << c << " and " << d << " is " << MyNamespace::max(c, d) << std::endl;

    std::string e = "Hello";
    std::string f = "World";
    std::cout << "Le plus grand entre \"" << e << "\" et \"" << f << "\" est \"" << MyNamespace::max(e, f) << "\"" << std::endl;


    return 0;
}