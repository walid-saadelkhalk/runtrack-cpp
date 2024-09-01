// main.cpp
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "drawShape.hpp"

int main() {
    Circle circle;
    Rectangle rectangle;

    drawShape(circle);     
    drawShape(rectangle);  

    return 0;
}
