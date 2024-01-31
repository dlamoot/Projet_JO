//
// Created by David Lamoot on 31/01/2024.
//

#ifndef SFMLTEST_NATATION_H
#define SFMLTEST_NATATION_H

#include <iostream>
#include <string>
#include "Sport.h"

class Natation : public Sport {
    public:
        Natation(std::string nom, std::string lieu);
        ~Natation();
        std::string getType() const;
        void afficher() const;

    protected:
        std::string lieu;
};

#endif //SFMLTEST_NATATION_H
