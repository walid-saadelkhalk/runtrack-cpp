#include "print.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "drawShape.hpp"
#include "ShapeFactory.hpp"

int main() {
    auto circle = ShapeFactory::createShape<Circle>();
    auto rectangle = ShapeFactory::createShape<Rectangle>();

    print("Drawing shapes:");
    drawShape(*circle);
    drawShape(*rectangle);

    print(1, 2.5, "hello", 'a', 42);  
    return 0;;
}
