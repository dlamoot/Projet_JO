//
// Created by dlamo on 01/01/2024.
//

#ifndef TEST_JO_SPORTIF_H
#define TEST_JO_SPORTIF_H

#include <iostream>
#include <string>
#include "Pays.h"
#include "random"
#include <vector>
#include <queue>

class Sportif {
    public:
        Sportif(int age, int poids, double taille,Pays pays , std::string nom, std::string prenom, std::string sexe);
        virtual ~Sportif();
        int getAge();
        int getPoids();
        double getTaille();
        std::string getNom();
        std::string getPrenom();
        std::string getSexe();
        std::string getPays();
        virtual void afficher() const;
        virtual std::string afficher_interface() const;

    protected:
        int age;
        int poids;
        double taille;
        std::string nom;
        std::string prenom;
        std::string sexe;
        Pays pays;
};


#endif //TEST_JO_SPORTIF_H
