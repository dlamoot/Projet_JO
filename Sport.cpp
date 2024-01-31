//
// Created by dlamo on 02/01/2024.
//

#include "Sport.h"

Sport::Sport(std::string nom) : nom(nom) {

}

Sport::~Sport() {
    //std::cout << "Destruction de l'objet Sport" << std::endl;
}

std::string Sport::getNom() const {
    return this->nom;
}

void Sport::afficher() const {
    std::cout << "Nom : " << this->nom << std::endl;
}

