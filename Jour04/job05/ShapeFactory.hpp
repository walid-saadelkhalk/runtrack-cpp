#ifndef SHAPESFACTORY_HPP
#define SHAPESFACTORY_HPP

#include <iostream>
#include "Shape.hpp"

class ShapeFactory {
    public:
        static Shape* createShape(const std::string& shapeType);
};

#endif