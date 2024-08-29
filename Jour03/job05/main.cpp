#include "Vector2d.hpp"
#include "Character.hpp"
#include "Weapon.hpp"
#include "Sword.hpp"
#include "Bow.hpp"
#include "Spear.hpp"
#include "Decor.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include <iostream>

int main() {
    Player player(0.0, 0.0, "neo", 50);
    Enemy enemy(5.0, 5.0, "smith", 50);

   while (player.isAlive() && enemy.isAlive()) {
        std::cout << "\n--- New Turn ---" << std::endl;

        std::cout << player.getName() << " has " << player.getHealth() << " health points." << std::endl;
        std::cout << enemy.getName() << " has " << enemy.getHealth() << " health points." << std::endl;

        player.attackEnemy(enemy);

        if (enemy.isAlive()) {
            enemy.update(player); 
        }

        player.update();

        std::cout << player.getName() << " now has " << player.getHealth() << " health points." << std::endl;
        std::cout << enemy.getName() << " now has " << enemy.getHealth() << " health points." << std::endl;

        if (!player.isAlive()) {
            std::cout << player.getName() << " has been defeated!" << std::endl;
            break;
        }
        if (!enemy.isAlive()) {
            std::cout << enemy.getName() << " has been defeated!" << std::endl;
            break;
        }
    }

    std::cout << "Game Over" << std::endl;
    return 0;
}