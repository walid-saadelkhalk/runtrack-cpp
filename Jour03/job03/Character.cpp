#include "Character.hpp"
#include <iostream>

Character::Character(double x, double y, const std::string& name, int health) 
    : GameObject(x, y), name(name), health(health) {}

Character::~Character() {}

void Character::draw() {
    std::cout << "Drawing Character " << name << " at (" << getX() << ", " << getY() << ")" << std::endl;
}

void Character::update() {
    setX(getX() + 1);
    setY(getY() + 1);
    
    if (isAlive()) {
        health-=1;
        std::cout << "Character " << name << " has " << health << " health left." << std::endl;
    }

    if (!isAlive()) {
        std::cout << "Character " << name << " is dead." << std::endl;
    }

    std::cout << "Updating Character " << name << "'s state." << std::endl;
    
}

bool Character::isAlive() const {
    return health > 0;
}

const std::string& Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}

void Character::setHealth(int health) {
    this->health = health;
}
