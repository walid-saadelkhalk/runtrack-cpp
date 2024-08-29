#include "Decor.hpp"

Decor::Decor(double x, double y, const std::string& name) : GameObject(x, y), name(name) {}

Decor::~Decor() {}

void Decor::draw() {
    std::cout << "Drawing Decor " << name << " at (" << getX() << ", " << getY() << ")" << std::endl;
}

void Decor::update() {
    std::cout << "Decor at (" << getX() << ", " << getY() << ") remains static." << std::endl;

}