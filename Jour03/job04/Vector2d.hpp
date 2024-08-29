#ifndef VECTOR2D_HPP
#define VECTOR2D_HPP

#include <iostream>

class Vector2d {
    private:
        double x;
        double y;

    public:
        Vector2d(double x, double y);
        ~Vector2d();

        // Getters and setters
        double getX() const;
        double getY() const;
        void setX(double x);
        void setY(double y);

        // Methods
        double distance(Vector2d v);
        Vector2d operator+(const Vector2d& v) const;
        Vector2d operator-(const Vector2d& v) const;
};

#endif