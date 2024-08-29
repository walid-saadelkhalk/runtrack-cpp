#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Character.hpp"
#include "Weapon.hpp"
#include "Spear.hpp"
#include "Sword.hpp"
#include "Bow.hpp"
#include <iostream>
#include <vector>

class Enemy;

class Player : public Character{
    private:
        Weapon* currentWeapon;
        std::vector<Weapon*> weapons;
        int currentWeaponIndex;


    public:
        Player(double x, double y, const std::string& name, int health);
        ~Player() override = default;

        void draw() override;
        void update() override;

        void switchWeapon();
        void attackEnemy(Enemy& enemy);
};

#endif 