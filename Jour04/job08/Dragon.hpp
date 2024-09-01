#ifndef DRAGON_HPP
#define DRAGON_HPP

#include "Enemy.hpp"

class Dragon : public Enemy {
public:
    void attack() const override {
        std::cout << "Dragon breathes fire!" << std::endl;
    }
};

#endif 
