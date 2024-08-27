#include <iostream>

int main () {
    int a = 42;
    int b = 21;

    int c = a;
    a = b;
    b = c;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}