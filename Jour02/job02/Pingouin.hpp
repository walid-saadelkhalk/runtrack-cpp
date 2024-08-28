#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

#include <iostream>
#include <string>


class Pingouin : public Aquatique, public Terrestre {
    private :
        std::string nom = "pingouin";
        int vitesseGlisse;

    public :
        Pingouin(int vitesseNage = 50, bool canSwim = true, int vitesseMarche = 10, bool canWalk = true);
        Pingouin(const Pingouin& other);
        ~Pingouin();
        std::string getNom() const;
        int getVitesseGlisse() const;
        
        void sePresenter(std::string nom);
        void marche() override;
        void nage() override;
        void setVitesseGlisse(int vitesseGlisse);
};

#endif