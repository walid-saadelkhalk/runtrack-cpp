#include "Terrestre.hpp"

Terrestre::Terrestre(int vitesseMarche, bool canWalk) : vitesseMarche(vitesseMarche), canWalk(canWalk) {}

Terrestre::~Terrestre() {}

void Terrestre::marche() {
    std::cout << "Le pingouin marche à "<< vitesseMarche << " km/h" <<std::endl;
}

int Terrestre::getVitesseMarche() const {
    return vitesseMarche;
}

bool Terrestre::getCanWalk() {
    return canWalk;
}

void Terrestre::setVitesseMarche(int vitesseMarche) {
    this->vitesseMarche = vitesseMarche;
}

void Terrestre::setCanWalk(bool canWalk) {
    this->canWalk = canWalk;
}