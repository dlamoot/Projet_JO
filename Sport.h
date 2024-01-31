//
// Created by dlamo on 02/01/2024.
//

#ifndef TEST_JO_SPORT_H
#define TEST_JO_SPORT_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Pays.h"

class Sport {
    public:
        Sport(std::string nom);
        ~Sport();
        std::string getNom() const;
        void afficher() const;

    protected:
        std::string nom;
};

#endif //TEST_JO_SPORT_H
