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

    auto pingouin3 = std::make_shared<Pingouin>(10, true, 10, true);
    pingouin3->sePresenter("pingouin");
    pingouin3->marche();
    pingouin3->nage();

    auto pingouin4 = std::make_shared<Pingouin>(30, true, 5, true);
    pingouin4->sePresenter("pingouinou");
    pingouin4->marche();
    pingouin4->nage();

    auto pingouin5 = std::make_shared<Pingouin>(90, true, 40, true);
    pingouin5->sePresenter("pingouinouou");
    pingouin5->marche();
    pingouin5->nage();

    Pingouin::ajouterLieuDeRencontre(std::string("lac"));
    Pingouin::ajouterLieuDeRencontre(std::string("glacier"));
    Pingouin::ajouterLieuDeRencontre(std::string("iceberg"));
    Pingouin::ajouterLieuDeRencontre(std::string("plaine"));
    Pingouin::ajouterLieuDeRencontre(std::string("falaise"));
    Pingouin::afficherLieuxDeRencontre();

    Pingouin::retirerLieuDeRencontre(std::string("falaise"));



    std::cout << "Nouvelle vitesse de nage de " << pingouin2->getNom() << " est de " << pingouin2->getVitesseNage() << " km/h" << std::endl;
    std::cout << "Vitesse de glisse de " << pingouin2->getNom() << " est de " << pingouin2->getVitesseGlisse() << " m/s" << std::endl;

    std::cout << "La colonie de pingouins contient " << Pingouin::colonie.size() << " pingouins." << std::endl;

    Pingouin::afficherTempsParcoursColonie();
    Pingouin::afficherLieuxDeRencontre();

    return 0;
}