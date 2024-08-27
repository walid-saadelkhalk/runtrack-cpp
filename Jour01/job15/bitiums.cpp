#include <iostream>
#include <bitset>
#include <cstdint>

bool isEvenNumberOfSetBits(uint32_t n) {
    int result = 0;

  
    while (n != 0) {
        result ^= (n & 1); 
        n >>= 1;           
    }

    return result == 0;
}

int main() {
    uint32_t n;
    std::cout << "Entrez un nombre entier : ";
    std::cin >> n;

    std::cout << "Représentation binaire : " << std::bitset<32>(n) << std::endl;
    std::cout << "Le nombre de bits à 1 est " << std::bitset<32>(n).count() << std::endl;
    bool isEven = isEvenNumberOfSetBits(n);
    std::cout << "Le nombre de bits à 1 est " << (isEven ? "pair" : "impair") << std::endl;

    return 0;
}
