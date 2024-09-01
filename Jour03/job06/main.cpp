#include "Vector2d.hpp"
#include "Character.hpp"
#include "Weapon.hpp"
#include "Sword.hpp"
#include "Bow.hpp"
#include "Spear.hpp"
#include "Decor.hpp"
#include "GameManager.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include <iostream>
#include <memory>
#include <vector>
#include <cmath>

int main() {
    GameManager gameManager;

    // Ajouter un joueur
    gameManager.addObject<Player>(3.0, 3.0, "Neo", 50);

    // Ajouter des ennemis
    gameManager.addObject<Enemy>(1.0, 1.0, "Smith", 5);
    gameManager.addObject<Enemy>(1.0, 1.0, "Agent Brown", 3);
    gameManager.addObject<Enemy>(1.0, 1.0, "Agent Jones", 4);

    // Ajouter des décors
    gameManager.addObject<Decor>(2.0, 2.0, "Tree");
    gameManager.addObject<Decor>(3.0, 3.0, "Rock");

    bool gameRunning = true;

    // Boucle principale du jeu
    while (gameRunning) {
        std::cout << "\n--- New Turn ---" << std::endl;

        // Mettre à jour et dessiner tous les objets
        gameManager.updateObjects();
        gameManager.drawObjects();

        // Le joueur attaque le premier ennemi à portée (s'il est à portée)
        for (auto& obj : gameManager.getGameObjects()) {
            auto* enemy = dynamic_cast<Enemy*>(obj.get());
            if (enemy && enemy->isAlive()) {
                Player* player = dynamic_cast<Player*>(gameManager.getGameObjects()[0].get());
                if (player) {
                    player->attackEnemy(*enemy);
                }
                break; // Le joueur n'attaque qu'un seul ennemi par tour
            }
        }

        // Les ennemis attaquent le joueur s'ils sont à portée
        Player* player = dynamic_cast<Player*>(gameManager.getGameObjects()[0].get());
        if (player) {
            for (auto& obj : gameManager.getGameObjects()) {
                auto* enemy = dynamic_cast<Enemy*>(obj.get());
                if (enemy && enemy->isAlive()) {
                    double distance = sqrt(pow(enemy->getX() - player->getX(), 2) + pow(enemy->getY() - player->getY(), 2));
                    if (distance < 1) {
                        std::cout << enemy->getName() << " attacks " << player->getName() << "!" << std::endl;
                        player->setHealth(player->getHealth() - 10);  // Exemple de dégâts
                    }
                }
            }
        }

        // Nettoyer les objets inutiles (ennemis morts)
        gameManager.cleanUp();

        // Vérifier les conditions de fin de jeu
        if (gameManager.isGameOver()) {
            std::cout << "Game Over: Player has been defeated!" << std::endl;
            gameRunning = false;
        }

        if (gameManager.isVictory()) {
            std::cout << "Victory! All enemies have been defeated!" << std::endl;
            gameRunning = false;
        }
    }

    std::cout << "Game Ended." << std::endl;
    return 0;
}