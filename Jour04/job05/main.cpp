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

    ShapeFactory factory;
    Shape* circle = factory.createShape("Circle");
    Shape* rectangle = factory.createShape("Rectangle");

    drawShape(*circle);
    drawShape(*rectangle);

    delete circle;
    delete rectangle;
    return 0;
}
