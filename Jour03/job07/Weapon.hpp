#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Character.hpp"
#include <iostream>

class Weapon{
    public:

        virtual ~Weapon() = default;

        virtual void attack(Character& character) = 0;

        virtual std::string getName() const = 0;

        virtual int getDistanceAttack() const = 0;
};

#endif