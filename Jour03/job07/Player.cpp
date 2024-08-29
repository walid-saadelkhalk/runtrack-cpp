#include "Player.hpp"
#include "Enemy.hpp"
#include <cmath>

Player::Player(double x, double y, const std::string& name, int health)
    : Character(x, y, name, health), currentWeaponIndex(0) {
    weapons.push_back(new Bow());
    weapons.push_back(new Spear());
    weapons.push_back(new Sword());
    currentWeapon = weapons[currentWeaponIndex];
}

void Player::draw() {
    std::cout << "Drawing Player " << getName() << " at (" << getX() << ", " << getY() << ")" << std::endl;
}

void Player::update() {
    std::cout << "Updating Player " << getName() << "'s state." << std::endl;
    switchWeapon();
}

void Player::switchWeapon() {
    currentWeaponIndex = (currentWeaponIndex + 1) % weapons.size();
    currentWeapon = weapons[currentWeaponIndex];
    std::cout << "Switched to " << currentWeapon->getName() << std::endl;
}

void Player::attackEnemy(Enemy& enemy) {
    double distance = sqrt(pow(getX() - enemy.getX(), 2) + pow(getY() - enemy.getY(), 2));

    std::cout << "Player " << getName() << " is at (" << getX() << ", " << getY() << ")" << std::endl;
    std::cout << "Enemy " << enemy.getName() << " is at (" << enemy.getX() << ", " << enemy.getY() << ")" << std::endl;


    if (distance <= currentWeapon->getDistanceAttack()) {
        std::cout << "Enemy is within range. Attacking!" << std::endl;
        currentWeapon->attack(enemy);
    } else {
        std::cout << "Enemy is out of range. Cannot attack with " << currentWeapon->getName() << "." << std::endl;
    }
}
