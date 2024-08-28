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
    pingouin2.setVitesseGlisse(4.5);

    std::cout << "Nouvelle vitesse de nage de " << pingouin2.getNom() << " est de " << pingouin2.getVitesseNage()<< " km/h" << std::endl;
    std::cout << "Vitesse de glisse de " << pingouin2.getNom() << " est de " << pingouin2.getVitesseGlisse() << " m/s" << std::endl;

    Pingouin pingouinCopie = pingouin2;
    std::cout << "Copie du pingouin : " << pingouinCopie.getNom() << ", nage à " << pingouinCopie.getVitesseNage() << " km/h, glisse à " << pingouinCopie.getVitesseGlisse() << " m/s." << std::endl;

    return 0;
}