#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <memory>
#include <algorithm>


class Pingouin : public Aquatique, public Terrestre {
    private :
        std::string nom = "pingouin";
        int vitesseGlisse;

    public :
        static std::vector<std::shared_ptr<Pingouin>> colonie;
        static std::list<std::string> lieuxDeRencontre;

        Pingouin(int vitesseNage = 50, bool canSwim = true, int vitesseMarche = 10, bool canWalk = true);
        Pingouin(const Pingouin& other);
        ~Pingouin();

        std::string getNom() const;
        int getVitesseGlisse() const;
        int calculerTempsParcours() const;
        
        void sePresenter(std::string nom);
        void marche() override;
        void nage() override;
        void setVitesseGlisse(int vitesseGlisse);

        static void afficherTempsParcoursColonie();
        static void ajouterPingouin(const std::shared_ptr<Pingouin>& pingouin);
        static void retirerPingouin(const Pingouin* pingouin);

        static void afficherLieuxDeRencontre();
        static void ajouterLieuDeRencontre(const std::string& lieu);
        static void retirerLieuDeRencontre(const std::string& lieu);


};

#endif