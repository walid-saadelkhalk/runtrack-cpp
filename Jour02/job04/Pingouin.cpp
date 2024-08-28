#include "Pingouin.hpp"
#include <algorithm>

std::vector<std::shared_ptr<Pingouin>> Pingouin::colonie;

Pingouin::Pingouin(int vitesseNage, bool canSwim, int vitesseMarche, bool canWalk) : Aquatique(vitesseNage, canSwim), Terrestre(vitesseMarche, canWalk), vitesseGlisse(1.0) {
    std::shared_ptr<Pingouin> ptr(this, [](Pingouin*) {});
    ajouterPingouin(ptr);
}

Pingouin::Pingouin(const Pingouin& other)
    : Aquatique(other.vitesseNage, other.canSwim),
      Terrestre(other.vitesseMarche, other.canWalk),
      nom(other.nom),
      vitesseGlisse(other.vitesseGlisse) {
    std::shared_ptr<Pingouin> ptr(this, [](Pingouin*) {});
    std::cout << "Constructeur de copie appelé pour " << nom << std::endl;
    ajouterPingouin(ptr);
}

Pingouin::~Pingouin() {
    retirerPingouin(this);
}

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

int Pingouin::calculerTempsParcours() const {
    double tempsGlisse = 15.0 / vitesseGlisse;  
    double tempsPlat1 = 20.0 / vitesseMarche;   
    double tempsNage = 50.0 / vitesseNage;      
    double tempsPlat2 = 15.0 / vitesseMarche;   

    return tempsGlisse + tempsPlat1 + tempsNage + tempsPlat2;  
}

void Pingouin::afficherTempsParcoursColonie() {
    for (const auto& pingouin : colonie) {
        std::cout << pingouin->getNom() << " met " << pingouin->calculerTempsParcours() << " secondes pour parcourir la piste." << std::endl;
    }
}

void Pingouin::ajouterPingouin(const std::shared_ptr<Pingouin>& pingouin) {
    colonie.push_back(pingouin);
}

void Pingouin::retirerPingouin(const Pingouin* pingouin) {
    auto it = std::remove_if(colonie.begin(), colonie.end(),
        [pingouin](const std::shared_ptr<Pingouin>& p) { return p.get() == pingouin; });
    colonie.erase(it, colonie.end());
}