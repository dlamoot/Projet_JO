//
// Created by dlamo on 02/01/2024.
//

#ifndef TEST_JO_ATHLETISME_H
#define TEST_JO_ATHLETISME_H

#include <iostream>
#include <string>
#include "Sport.h"

class Athletisme : public Sport {
    public:
        Athletisme(std::string nom, std::string lieu);
        ~Athletisme();
        std::string getType() const;
        void afficher() const;

    protected:
        std::string lieu;
};

#endif //TEST_JO_ATHLETISME_H
