#include <iostream>
#include <bitset>
#include <cstdint>


constexpr int fibonacci(int n) {
    return (n <= 1) ? n : (fibonacci(n - 1) + fibonacci(n - 2));
}

bool hasEvenNumberOfSetBits(uint32_t n) {
    int count = std::bitset<32>(n).count();
    return (count % 2 == 0);
}

int main() {
    std::cout << "Les dix premiers termes de la suite de Fibonacci et la parité du nombre de bits à 1 :" << std::endl;
    for (int i = 1; i <= 10; i++) {
        uint32_t fib = fibonacci(i);
        bool evenBits = hasEvenNumberOfSetBits(fib);
        std::cout << "Fibonacci(" << i << ") = " << fib;
        std::cout << " - Nombre de bits a 1 est " << (evenBits ? "pair" : "impair") << std::endl;
    }
    return 0;
} 