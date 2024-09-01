#include "Circle.hpp"

void Circle::draw() const {
    std::cout << "Drawing a Circle" << std::endl;
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}