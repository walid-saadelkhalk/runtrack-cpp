#include "Shape.hpp"

Shape::~Shape() {
    std::cout << "Destroying a Shape" << std::endl;
}

void Shape::draw() const {
    std::cout << "Drawing a Shape" << std::endl;
}