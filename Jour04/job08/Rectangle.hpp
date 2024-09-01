#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
#include "Shape.hpp"

class Rectangle : public Shape{
    private:
        double width;
        double height;
    public:

        void draw() const override;
        double getWidth();
        double getHeight();
        void setWidth(double);
        void setHeight(double);
};

#endif 