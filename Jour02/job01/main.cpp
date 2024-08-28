#include <iostream>
#include "Pingouin.hpp"

int main() {
    Pingouin pingouin;
    pingouin.sePresenter("pingou");
    pingouin.marche();
    pingouin.nage();

    Pingouin pingouin2(20, false, 5, false);
    pingouin2.sePresenter("pongou");
    pingouin2.marche();
    pingouin2.nage();

    pingouin2.setVitesseNage(30);

    std::cout << "Nouvelle vitesse de nage de " << pingouin2.getNom() << " est de " << pingouin2.getVitesseNage()<< " km/h" << std::endl;

    return 0;
}