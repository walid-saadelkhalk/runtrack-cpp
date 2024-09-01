// main.cpp
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "drawShape.hpp"
#include "ShapeFactory.hpp"

int main() {
    // Circle circle;
    // Rectangle rectangle;

    // drawShape(circle);     
    // drawShape(rectangle);  

    auto circle = ShapeFactory::createShape<Circle>();
    auto rectangle = ShapeFactory::createShape<Rectangle>();

    drawShape(*circle);
    drawShape(*rectangle);

    return 0;;
}
