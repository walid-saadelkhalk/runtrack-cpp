#include <iostream>

int cube(int a) {
    return a * a * a;
}

int main() {
    int n;
    int result;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int a = 5;
    for (int i = a; i <= n; i++) {
        result += cube(i);
    }
    std::cout << "The sum of the cubes is " << result << std::endl;
    return 0;
}
