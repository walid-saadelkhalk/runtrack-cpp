#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "Character.hpp"
#include <iostream>

class Player;  

class Enemy : public Character {
    public:
    Enemy(double x, double y, const std::string& name, int health);
    ~Enemy() override = default;

    void draw() override;
    void update(Player& player);

};

#endif