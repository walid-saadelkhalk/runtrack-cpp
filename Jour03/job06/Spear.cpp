#include "Spear.hpp"

Spear::Spear() : weaponName("Spear"), damage(2), distanceAttack(2) {
    std::cout << "Constructor called" << std::endl;
}

std::string Spear::getName() const {
    return weaponName;
}

int Spear::getDamage() const {
    return damage;
}

int Spear::getDistanceAttack() const {
    return distanceAttack;
}

void Spear::attack(Character& character) {
    std::cout << "Attacking " << character.getName() 
                << " with " << weaponName << ", causing " << damage 
                << " damage." << std::endl;
    character.setHealth(character.getHealth() - damage);
}
