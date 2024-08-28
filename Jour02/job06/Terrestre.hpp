#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP

#include <iostream>

class Terrestre {
    protected :
        int vitesseMarche;
        bool canWalk;
    
    public :
        Terrestre(int vitesseMarche, bool canWalk);
        ~Terrestre();
        virtual void marche();
        int getVitesseMarche() const;
        bool getCanWalk();
        void setVitesseMarche(int vitesseMarche);
        void setCanWalk(bool canWalk);
};

#endif