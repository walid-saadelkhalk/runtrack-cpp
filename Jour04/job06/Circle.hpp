#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include <iostream>
#include "Shape.hpp"

class Circle : public Shape {
    private:
        double radius;
    public:

        void draw() const override;
        double getRadius();
        void setRadius(double);
};

#endif