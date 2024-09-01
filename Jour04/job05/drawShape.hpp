#ifndef DRAWSHAPE_HPP
#define DRAWSHAPE_HPP

#include <type_traits>
#include "Shape.hpp"

template <typename T>
void drawShape(const T& shape) {
    static_assert(std::is_base_of<Shape, T>::value, "T must be derived from Shape");
    shape.draw();
}

#endif 
