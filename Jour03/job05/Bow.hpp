#ifndef BOW_HPP
#define BOW_HPP

#include "Weapon.hpp"
#include <iostream>


class Bow : public Weapon {
    private:
        const std::string weaponName;
        const int damage;
        const int distanceAttack;
    public:
        Bow();
        ~Bow() override = default;

        void attack(Character& character) override;

        // Getters and setters
        std::string getName() const override;
        int getDamage() const;
        int getDistanceAttack() const;
};

#endif 