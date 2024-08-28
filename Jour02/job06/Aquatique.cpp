#include "Aquatique.hpp"

Aquatique::Aquatique(int vitesseNage, bool canSwim) : vitesseNage(vitesseNage), canSwim(canSwim) {}

Aquatique::~Aquatique() {}

void Aquatique::nage() {
    std::cout << "Le pingouin nage à "<< vitesseNage << " km/h" <<std::endl;
}

int Aquatique::getVitesseNage() const {
    return vitesseNage;
}

bool Aquatique::getCanSwim() {
    return canSwim;
}

void Aquatique::setVitesseNage(int vitesseNage) {
    this->vitesseNage = vitesseNage;
}

void Aquatique::setCanSwim(bool canSwim) {
    this->canSwim = canSwim;
}