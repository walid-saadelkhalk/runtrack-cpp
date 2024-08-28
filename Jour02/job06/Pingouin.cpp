#include "Pingouin.hpp"
#include <algorithm>


// Initialisation des variables statiques
std::vector<std::shared_ptr<Pingouin>> Pingouin::colonie;
std::list<std::string> Pingouin::lieuxDeRencontre;


// Constructeur
Pingouin::Pingouin(int vitesseNage, bool canSwim, int vitesseMarche, bool canWalk) : Aquatique(vitesseNage, canSwim), Terrestre(vitesseMarche, canWalk), vitesseGlisse(1.0) {
    std::shared_ptr<Pingouin> ptr(this, [](Pingouin*) {});
    ajouterPingouin(ptr);
}


// Constructeur de copie
Pingouin::Pingouin(const Pingouin& other)
    : Aquatique(other.vitesseNage, other.canSwim),
      Terrestre(other.vitesseMarche, other.canWalk),
      nom(other.nom),
      vitesseGlisse(other.vitesseGlisse) {
    std::shared_ptr<Pingouin> ptr(this, [](Pingouin*) {});
    std::cout << "Constructeur de copie appelé pour " << nom << std::endl;
    ajouterPingouin(ptr);
}


// Destructeur
Pingouin::~Pingouin() {
    std::cout << "Destructeur appelé pour " << nom << std::endl;
    retirerPingouin(this);
}


// Getter nom
std::string Pingouin::getNom() const {
    return nom;
}


// Getter et setter vitesse de glisse
int Pingouin::getVitesseGlisse() const {
    return vitesseGlisse;
}

void Pingouin::setVitesseGlisse(int vitesse) {
    vitesseGlisse = vitesse;
    std::sort(colonie.begin(), colonie.end(), [](const std::shared_ptr<Pingouin>& a, const std::shared_ptr<Pingouin>& b) {
        return a->calculerTempsParcours() < b->calculerTempsParcours();
    });
}


// Présentation
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


// Temps de parcours
int Pingouin::calculerTempsParcours() const {
    int tempsGlisse = 15 / vitesseGlisse;  
    int tempsPlat1 = 20 / vitesseMarche;   
    int tempsNage = 50 / vitesseNage;      
    int tempsPlat2 = 15 / vitesseMarche;   

    return tempsGlisse + tempsPlat1 + tempsNage + tempsPlat2;  
}


// Ajouter,afficher et retirer des pingouins de la colonie
void Pingouin::afficherTempsParcoursColonie() {
    for (const auto& pingouin : colonie) {
        std::cout << pingouin->getNom() << " met " << pingouin->calculerTempsParcours() << " secondes pour parcourir la piste." << std::endl;
    }
}

void Pingouin::ajouterPingouin(const std::shared_ptr<Pingouin>& pingouin) {
    colonie.push_back(pingouin);
    std::sort(colonie.begin(), colonie.end(), [](const std::shared_ptr<Pingouin>& a, const std::shared_ptr<Pingouin>& b) {
        return a->calculerTempsParcours() < b->calculerTempsParcours();
    });
}

void Pingouin::retirerPingouin(const Pingouin* pingouin) {
    auto it = std::remove_if(colonie.begin(), colonie.end(),
        [pingouin](const std::shared_ptr<Pingouin>& p) { return p.get() == pingouin; });
    colonie.erase(it, colonie.end());
}


// Ajouter, afficher et retirer des lieux de rencontre
void Pingouin::afficherLieuxDeRencontre() {
    for (const auto& lieu : lieuxDeRencontre) {
        std::cout << "Lieu de rencontre : " << lieu << std::endl;
    }
    std::cout << std::endl;
}

void Pingouin::ajouterLieuDeRencontre(const std::string& lieu) {
    lieuxDeRencontre.push_back(lieu);
    std::cout << "Lieu de rencontre ajouté : " << lieu << std::endl;
}

void Pingouin::retirerLieuDeRencontre(const std::string& lieu) {
    lieuxDeRencontre.remove(lieu);
    std::cout << "Lieu de rencontre retiré : " << lieu << std::endl;
}


