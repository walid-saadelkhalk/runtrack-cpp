#include "Rectangle.hpp"

void Rectangle::draw() const{
    std::cout << "Drawing a Rectangle" << std::endl;
}

double Rectangle::getWidth() {
    return width;
}

double Rectangle::getHeight() {
    return height;
}

void Rectangle::setWidth(double width) {
    this->width = width;
}

void Rectangle::setHeight(double height) {
    this->height = height;
}