#include <iostream>
#include <cstdlib>
#include <ctime>

enum Specialite {
    IA,
    Web,
    Logiciel,
    SystemeImmersif,
    Cybersecurite,
    NombreSpecialites
};

const char* nomSpecialites[] = {
    "Intelligence Artificielle",
    "Développement Web",
    "Ingénierie Logicielle",
    "Systèmes Immersifs",
    "Cybersécurité"
};

void afficherSpecialite(Specialite specialite, int nombreEtudiants) {
    std::cout << nomSpecialites[specialite] << " : " << nombreEtudiants << " etudiants" << std::endl;
}

int main() {
    
    std::srand(std::time(0));
 
    int etudiants[NombreSpecialites];

    for (int i = 0; i < NombreSpecialites; i++) {
        etudiants[i] = 12 + std::rand() % 55; 
    }

    for (int i = 0; i < NombreSpecialites; i++) {
        afficherSpecialite(static_cast<Specialite>(i), etudiants[i]);
    }

    return 0;
}
