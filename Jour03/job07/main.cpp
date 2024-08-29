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
#include <memory>
#include <algorithm>

int main() {
    Player player(0.0, 0.0, "Neo", 50);
    std::vector<std::unique_ptr<Enemy>> enemies; 
    enemies.push_back(std::make_unique<Enemy>(5.0, 5.0, "Smith", 50));
    enemies.push_back(std::make_unique<Enemy>(10.0, 10.0, "Agent Brown", 30));
    enemies.push_back(std::make_unique<Enemy>(15.0, 15.0, "Agent Jones", 40));

    std::vector<std::unique_ptr<Decor>> decors;
    decors.push_back(std::make_unique<Decor>(2.0, 2.0, "Tree"));
    decors.push_back(std::make_unique<Decor>(3.0, 3.0, "Rock"));

    bool gameRunning = true;

    while (gameRunning) {
        std::cout << "\n--- New Turn ---" << std::endl;

        for (const auto& decor : decors) {
            decor->update();
            decor->draw();
        }

        player.update();
        player.draw();

        for (auto& enemy : enemies) {
            if (enemy->isAlive()) {
                enemy->update(player);
                enemy->draw();
            }
        }

        for (auto& enemy : enemies) {
            if (enemy->isAlive()) {
                player.attackEnemy(*enemy);
                break;
            }
        }

        enemies.erase(
            std::remove_if(enemies.begin(), enemies.end(),
                [](const std::unique_ptr<Enemy>& enemy) {
                    if (!enemy->isAlive()) {
                        std::cout << enemy->getName() << " has been defeated and removed from the game." << std::endl;
                        return true; 
                    }
                    return false;
                }),
            enemies.end()
        );

        if (!player.isAlive()) {
            std::cout << "Game Over: " << player.getName() << " has been defeated!" << std::endl;
            gameRunning = false; 
        }

        if (enemies.empty()) {
            std::cout << "Victory! All enemies have been defeated!" << std::endl;
            gameRunning = false;
        }
    }

    std::cout << "Game Ended." << std::endl;
    return 0;
}