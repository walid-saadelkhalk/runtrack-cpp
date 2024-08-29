#include "GameObject.hpp"

GameObject::~GameObject() {
    std::cout << "Destroying GameObject at (" << getX() << ", " << getY() << ")" << std::endl;
}
