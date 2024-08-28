#include "Pingouin.hpp"

Pingouin::Pingouin(int vitesseNage, bool canSwim, int vitesseMarche, bool canWalk) : Aquatique(vitesseNage, canSwim), Terrestre(vitesseMarche, canWalk) {}

Pingouin::~Pingouin() {}

std::string Pingouin::getNom() const {
    return nom;
}

void Pingouin::sePresenter(std::string nouveauNom) {
    nom = nouveauNom;
    std::cout << "\nJe suis un " << nom << " le pingouin" << std::endl;
}

void Pingouin::marche() {
    Terrestre::marche();
}

void Pingouin::nage() {
    Aquatique::nage();
}