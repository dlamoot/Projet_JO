//
// Created by dlamo on 02/01/2024.
//

#include "Athletisme.h"

Athletisme::Athletisme(std::string nom, std::string lieu) : Sport(nom), lieu(lieu) {

}

Athletisme::~Athletisme() {
    //std::cout << "Destruction de l'objet Athletisme" << std::endl;
}

std::string Athletisme::getType() const {
    return "Athletisme";
}

void Athletisme::afficher() const {
    Sport::afficher();
    std::cout << "Lieu : " << this->lieu << std::endl;
}

