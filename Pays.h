//
// Created by dlamo on 02/01/2024.
//

#ifndef TEST_JO_PAYS_H
#define TEST_JO_PAYS_H

#include <iostream>
#include <string>

class Pays {
    public:
        Pays(std::string nom);
        ~Pays();
        std::string getNom() const;
        void afficher() const;

    protected:
        std::string nom;
};



#endif //TEST_JO_PAYS_H
