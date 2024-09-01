#include "Enemy.hpp"
#include "Player.hpp"
#include <cmath>

Enemy::Enemy(double x, double y, const std::string& name, int health) : Character(x, y, name, health) {}

void Enemy::draw() {
    std::cout << "Enemy " << getName() << " is at position (" << getX() << ", " << getY() << ") with " << getHealth() << " health points." << std::endl;
}

void Enemy::update(Player& player) {
    double dx = player.getX() - getX();
    double dy = player.getY() - getY();

    double distance = sqrt(dx * dx + dy * dy);
    
    if (distance < 1) {
        std::cout << getName() << " is within attack range of " << player.getName() << "!" << std::endl;
        return;
    }

    double step = 1.0; 
    double stepX = step * (dx / distance);
    double stepY = step * (dy / distance);
    
    setX(getX() + stepX);
    setY(getY() + stepY);
    
    std::cout << getName() << " is moving towards " << player.getName() << "." << std::endl;
}
