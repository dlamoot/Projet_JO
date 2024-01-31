//
// Created by David Lamoot on 31/01/2024.
//

#include "Natation.h"

Natation::Natation(std::string nom, std::string lieu) : Sport(nom), lieu(lieu) {

}

Natation::~Natation() {
    //std::cout << "Destruction de l'objet Natation" << std::endl;
}

std::string Natation::getType() const {
    return "Natation";
}

void Natation::afficher() const {
    Sport::afficher();
    std::cout << "Lieu : " << this->lieu << std::endl;
}

