#ifndef SPEAR_HPP
#define SPEAR_HPP

#include "Weapon.hpp"
#include <iostream>


class Spear : public Weapon {
    private:
        const std::string weaponName;
        const int damage;
        const int distanceAttack;
    public:
        Spear();
        ~Spear() override = default;

        void attack(Character& character) override;

        // Getters and setters
        std::string getName() const override;
        int getDamage() const;
        int getDistanceAttack() const;
};

#endif 