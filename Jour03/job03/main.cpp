#include "Vector2d.hpp"
#include "Character.hpp"
#include "Decor.hpp"
#include <iostream>

int main(){
    // Vector2d v1(1.0, 2.0);
    // Vector2d v2(3.0, 4.0);

    // std::cout << "Distance between v1 and v2: " << v1.distance(v2) << std::endl;

    // Vector2d v3 = v1 + v2;
    // std::cout << "v1 + v2 = (" << v3.getX() << ", " << v3.getY() << ")" << std::endl;

    // Vector2d v4 = v1 - v2;
    // std::cout << "v1 - v2 = (" << v4.getX() << ", " << v4.getY() << ")" << std::endl;

    Character hero(0.0, 0.0, "neo", 10);
    Decor tree(5.0, 5.0, "tree");

   for (int i = 0; i < 15; i++) { 
        std::cout << "\nCycle " << i + 1 << std::endl;
        
        hero.update();
        
        if (hero.isAlive()) {
            std::cout << "The character is still alive." << std::endl;
        } else {
            std::cout << "The character is dead." << std::endl;
            break; 
        }
        tree.update();
    }

    hero.draw();
    tree.draw();

    return 0;
};