#include "Vector2d.hpp"
#include <iostream>
#include <cmath>

Vector2d::Vector2d(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector2d::~Vector2d() {
    std::cout << "Destructor called" << std::endl;
}

double Vector2d::getX() const {
    return this->x;
}

double Vector2d::getY() const {
    return this->y;
}

void Vector2d::setX(double x) {
    this->x = x;
}

void Vector2d::setY(double y) {
    this->y = y;
}

double Vector2d::distance(const Vector2d v) {
    double dx = this->x - v.getX();
    double dy = this->y - v.getY();
    return sqrt(dx * dx + dy * dy);    
}

Vector2d Vector2d::operator+(const Vector2d& v) const{
    return Vector2d(this->x + v.getX(), this->y + v.getY());
}

Vector2d Vector2d::operator-(const Vector2d& v) const{
    return Vector2d(this->x - v.getX(), this->y - v.getY());
}