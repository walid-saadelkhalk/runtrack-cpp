#ifndef SWORD_HPP
#define SWORD_HPP

#include "Weapon.hpp"
#include <iostream>


class Sword : public Weapon {
    private:
        const std::string weaponName;
        const int damage;
        const int distanceAttack;
    public:
        Sword();
        ~Sword() override = default;

        void attack(Character& character) override;

        // Getters and setters
        std::string getName() const override;
        int getDamage() const;
        int getDistanceAttack() const;
};

#endif 