#ifndef PINGOUIN_HPP
#define PINGOUIN_HPP

#include "Aquatique.hpp"
#include "Terrestre.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <set>
#include <memory>
#include <algorithm>


class Pingouin : public Aquatique, public Terrestre {
    private :
        std::string nom = "pingouin";
        std::map<std::string, int> competences;
        std::set<std::weak_ptr<Pingouin>, std::owner_less<std::weak_ptr<Pingouin>>> amis;
        std::unordered_map<std::string, std::string> journal;
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

        void ajouterCompetences(const std::string& competence, int niveau);
        void modifierCompetences(const std::string& competence, int nouveauNiveau);
        void supprimerCompetences(const std::string& competence);
        void afficherCompetences() const;

        void ajouterAmi(const std::shared_ptr<Pingouin>& ami);
        void retirerAmi(const std::shared_ptr<Pingouin>& ami);
        void afficherAmis() const;
        
        void ajouterEvenement(const std::string& date, const std::string& description);
        void modifierEvenement(const std::string& date, const std::string& nouvelleDescription);
        void supprimerEvenement(const std::string& date);
        void afficherJournal() const;
};

#endif