#include "Bow.hpp"

Bow::Bow() : weaponName("Bow"), damage(1), distanceAttack(4) {
    std::cout << "Constructor called" << std::endl;
}

std::string Bow::getName() const {
    return weaponName;
}

int Bow::getDamage() const {
    return damage;
}

int Bow::getDistanceAttack() const {
    return distanceAttack;
}

void Bow::attack(Character& character) {
    std::cout << "Attacking " << character.getName() 
                << " with " << weaponName << ", causing " << damage 
                << " damage." << std::endl;
    character.setHealth(character.getHealth() - damage);
}
