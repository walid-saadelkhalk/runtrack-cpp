#ifndef AQUATIQUE_HPP
#define AQUATIQUE_HPP

#include <iostream>

class Aquatique {
    protected :
        int vitesseNage;
        bool canSwim;
    
    public :
        Aquatique(int vitesseNage, bool canSwim);
        ~Aquatique();
        virtual void nage();
        int getVitesseNage() const;
        bool getCanSwim();
        void setVitesseNage(int vitesseNage);
        void setCanSwim(bool canSwim);
};

#endif 