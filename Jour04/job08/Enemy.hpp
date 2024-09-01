#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <memory>

class Enemy {
public:
    virtual void attack() const = 0; 
    virtual ~Enemy() = default;      
};

#endif 
