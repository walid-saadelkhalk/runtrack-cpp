#include "Vector2d.hpp"
#include "Character.hpp"
#include "Weapon.hpp"
#include "Sword.hpp"
#include "Bow.hpp"
#include "Spear.hpp"
#include "Decor.hpp"
#include <iostream>

int main(){

    Character hero(0.0, 0.0, "neo", 10);
    Character ennemy(1.0, 1.0, "smith", 50);

    Spear spear;

    for (int i = 0; i < 4; i++){
        spear.attack(ennemy);
        ennemy.update();
    }

    // sword.attack(ennemy);
    // ennemy.update();

    return 0;
};