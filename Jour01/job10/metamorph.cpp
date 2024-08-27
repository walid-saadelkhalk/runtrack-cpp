#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 10> hero = {3, 2, 1, 4, 9, 8, 10, 6, 5, 7};
    int a = hero[0];
    std::sort(hero.begin(), hero.end());
    std::array<int*, 10> ptr_hero;

    for (int i = 0; i < hero.size(); i++) {
        ptr_hero[i] = &hero[i];
    }

    std::cout <<"Values of the array: " << std::endl;
    for (size_t i = 0; i < hero.size(); i++) {
        std::cout << *ptr_hero[i] << std::endl;
    }
    std::cout << std::endl;

    int *ptr_a = &hero[0];
    std::cout << "the lowest element is "<< *ptr_a << std::endl;

    return 0; 
}

