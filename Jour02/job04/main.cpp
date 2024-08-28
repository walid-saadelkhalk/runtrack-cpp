#include <iostream>
#include "Pingouin.hpp"

int main() {
    auto pingouin1 = std::make_shared<Pingouin>();
    pingouin1->sePresenter("pingou");
    pingouin1->marche();
    pingouin1->nage();

    auto pingouin2 = std::make_shared<Pingouin>(20, false, 5, false);
    pingouin2->sePresenter("pongou");
    pingouin2->marche();
    pingouin2->nage();

    pingouin2->setVitesseNage(30);
    pingouin2->setVitesseGlisse(4.5);

    std::cout << "Nouvelle vitesse de nage de " << pingouin2->getNom() << " est de " << pingouin2->getVitesseNage() << " km/h" << std::endl;
    std::cout << "Vitesse de glisse de " << pingouin2->getNom() << " est de " << pingouin2->getVitesseGlisse() << " m/s" << std::endl;

    std::cout << "La colonie de pingouins contient " << Pingouin::colonie.size() << " pingouins." << std::endl;

    Pingouin::afficherTempsParcoursColonie();

    return 0;
}