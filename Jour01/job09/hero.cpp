#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 10> hero = {3, 2, 1, 4, 9, 8, 10, 6, 5, 7};
    int a = hero[0];
    std::sort(hero.begin(), hero.end());
        for (int i : hero) {
    }
        int *ptr_a = &hero[0];
        std::cout << "the lowest element is "<< *ptr_a << std::endl;
}