#include <iostream>

void reverse(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    std::cout << "The reversed number is : " << reversed << std::endl;
}

int main () {
    int a;
    std::cout << "Enter a number : ";
    std::cin >> a;
    std::cout << "The number choosen is : " << a << std::endl;
    reverse(a);
}