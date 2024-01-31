//
// Created by dlamo on 01/01/2024.
//

#ifndef TEST_JO_ATHLETE_H
#define TEST_JO_ATHLETE_H

#include "Sportif.h"

class Athlete : public Sportif {
    public:
        Athlete(int age, int poids, double taille, Pays pays, std::string nom, std::string prenom, std::string sexe, std::string sport);
        ~Athlete();
        std::string getSport();
        virtual double performance_moy(std::vector<double> performances) const = 0;
        virtual void afficher() const;

    protected:
        std::string sport;
};

#endif //TEST_JO_ATHLETE_H
