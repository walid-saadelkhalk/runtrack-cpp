#include "Pingouin.hpp"

Pingouin::Pingouin(int vitesseNage, bool canSwim, int vitesseMarche, bool canWalk) : Aquatique(vitesseNage, canSwim), Terrestre(vitesseMarche, canWalk) {}

Pingouin::Pingouin(const Pingouin& other)
    : Aquatique(other.vitesseNage, other.canSwim),
      Terrestre(other.vitesseMarche, other.canWalk),
      nom(other.nom),
      vitesseGlisse(other.vitesseGlisse) {
    std::cout << "Constructeur de copie appelé pour " << nom << std::endl;
}

Pingouin::~Pingouin() {}

std::string Pingouin::getNom() const {
    return nom;
}

int Pingouin::getVitesseGlisse() const {
    return vitesseGlisse;
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

void Pingouin::setVitesseGlisse(int vitesseGlisse) {
    this->vitesseGlisse = vitesseGlisse;
}