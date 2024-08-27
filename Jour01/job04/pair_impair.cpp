#include <iostream>

int main() {
    int a;
    std::cout << "Entrez un nombre : ";
    std::cin >> a;
    if (a %2 ==0) {
        std::cout << "Le nombre a = "<< a << " est pair" << std::endl;
    } else {
        std::cout << "Le nombre a = "<< a << " est impair" << std::endl;
    }
}