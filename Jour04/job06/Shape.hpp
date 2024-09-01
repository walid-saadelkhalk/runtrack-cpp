#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

class Shape {
    public:
        virtual ~Shape() {}
        virtual void draw() const = 0;
};

#endif