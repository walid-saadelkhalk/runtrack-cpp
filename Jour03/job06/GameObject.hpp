#ifndef GAMEOBJECT_HPP_
#define GAMEOBJECT_HPP_

#include <iostream>
#include "Vector2d.hpp"

class GameObject : public Vector2d {
    public:
        GameObject(double x, double y) : Vector2d(x, y) {};
        virtual ~GameObject();

        virtual void draw() = 0;
        virtual void update() = 0;
};

#endif