#include "print.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "drawShape.hpp"
#include "ShapeFactory.hpp"
#include "EnemyFactory.hpp"

int main() {
    EnemyFactory factory;

    auto goblin = factory.createEnemy("Goblin");
    auto ogre = factory.createEnemy("Ogre");
    auto dragon = factory.createEnemy("Dragon");
    auto unknown = factory.createEnemy("Unknown");

    if (goblin) goblin->attack();
    if (ogre) ogre->attack();
    if (dragon) dragon->attack();
    if (!unknown) std::cout << "Unknown enemy type!" << std::endl;
    return 0;;
}
