//
// Created by dlamo on 02/01/2024.
//

#include "Pays.h"

Pays::Pays(std::string nom) : nom(nom) {

}

Pays::~Pays() {
    //std::cout << "Destruction de l'objet Pays" << std::endl;
}

std::string Pays::getNom() const {
    return this->nom;
}


