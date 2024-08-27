#include <iostream>

int swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int main() {
    int a = 5;
    int b = 10;
    std::cout << "Before swap: a = " << a << " and b = " << b << std::endl;
    swapValues(a, b);
    std::cout << "After swap: a = " << a << " and b = " << b << std::endl;
    return 0;
}