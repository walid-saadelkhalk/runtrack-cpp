#include "Enemy.hpp"
#include "Player.hpp" // Include the header file for the 'Player' class
#include <cmath>

Enemy::Enemy(double x, double y, const std::string& name, int health) : Character(x, y, name, health) {}

void Enemy::draw() {
    std::cout << "Enemy " << getName() << " is at position (" << getX() << ", " << getY() << ") with " << getHealth() << " health points." << std::endl;
}

void Enemy::update(Player& player) {
    double distance = sqrt(pow(player.getX() - getX(), 2) + pow(player.getY() - getY(), 2));

    std::cout << "Enemy " << getName() << " is at (" << getX() << ", " << getY() << ")" << std::endl;
    std::cout << "Player " << player.getName() << " is at (" << player.getX() << ", " << player.getY() << ")" << std::endl;

    if (distance < 1) {
        player.setHealth(player.getHealth() - 1);
        std::cout << "Player " << player.getName() << " is attacked by " << getName() << "!" << std::endl;
        std::cout << "Player " << player.getName() << " has " << player.getHealth() << " health points left." << std::endl;
    } else {
        std::cout << getName() << " is approaching " << player.getName() << "." << std::endl;
        if (getX() < player.getX()) setX(getX() + 1);
        else if (getX() > player.getX()) setX(getX() - 1);

        if (getY() < player.getY()) setY(getY() + 1);
        else if (getY() > player.getY()) setY(getY() - 1);
    }
}
