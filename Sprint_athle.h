//
// Created by dlamo on 02/01/2024.
//

#ifndef TEST_JO_SPRINT_ATHLE_H
#define TEST_JO_SPRINT_ATHLE_H

#include "Athletisme.h"
#include "Sprinter.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


class Sprint_athle : public Athletisme {
    public:
        Sprint_athle(std::string nom, std::string lieu, std::string date, std::string  epreuve, std::string sexe);
        ~Sprint_athle();
        virtual void afficher() const;
        std::string setEpreuve(std::string epreuve, std::string sexe, Sprinter sprinter[8]);
        virtual Sprinter retrouverPerf(double perf, Sprinter sprinter[8], std::string epreuve);
        virtual void afficherClassement(std::priority_queue<double, std::vector<double>, std::greater<double>> classement, Sprinter sprinter[8], std::string epreuve);
        virtual std::string afficherClassementToString(std::priority_queue<double, std::vector<double>, std::greater<double>> classement, Sprinter sprinter[8], std::string epreuve);
        Sprint_athle& operator=(const Sprint_athle& autre);
        bool operator==(const Sprint_athle& autre) const;

protected:
        std::string date;
        std::string epreuve;
        std::string sexe;
};



#endif //TEST_JO_SPRINT_ATHLE_H

