#include <iostream>


int main() {

    float prix_HT;
    float taux_TVA = 19.6;
    float nb_kilos;
    float prix_TTC;

    std::cout << "Entrez le prix au kilo : ";
    std::cin >> prix_HT;
    std::cout << "Entrez le nombre de kilos : ";
    std::cin >> nb_kilos;
    std::cout <<"Le prix TTC est de : " << prix_HT * nb_kilos * (1 + taux_TVA / 100) << std::endl;
}