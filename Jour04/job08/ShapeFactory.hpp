#ifndef SHAPESFACTORY_HPP
#define SHAPESFACTORY_HPP

#include <iostream>
#include <memory>
#include "Shape.hpp"

class ShapeFactory {
    public:
        template <typename T>
        static std::unique_ptr<Shape> createShape() {
            static_assert(std::is_base_of<Shape, T>::value, "T must be derived from Shape");
            return std::make_unique<T>();
        }
};

#endif