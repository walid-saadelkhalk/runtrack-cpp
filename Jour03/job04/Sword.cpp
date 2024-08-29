#include "Sword.hpp"

Sword::Sword() : weaponName("Sword"), damage(4), distanceAttack(1) {
    std::cout << "Constructor called" << std::endl;
}

std::string Sword::getName() const {
    return weaponName;
}

int Sword::getDamage() const {
    return damage;
}

int Sword::getDistanceAttack() const {
    return distanceAttack;
}

void Sword::attack(Character& character) {
    std::cout << "Attacking " << character.getName() 
                << " with " << weaponName << ", causing " << damage 
                << " damage." << std::endl;
    character.setHealth(character.getHealth() - damage);
}
