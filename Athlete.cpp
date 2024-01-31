//
// Created by dlamo on 01/01/2024.
//

#include "Athlete.h"

Athlete::Athlete(int age, int poids, double taille, Pays pays, std::string nom, std::string prenom, std::string sexe, std::string sport) : Sportif(age, poids, taille, pays, nom, prenom, sexe) {
    this->sport = sport;
}

Athlete::~Athlete() {
    //std::cout << "Destruction de l'objet Athlete" << std::endl;
}

std::string Athlete::getSport() {
    return this->sport;
}

void Athlete::afficher() const {
    Sportif::afficher();
    std::cout << "Sport : " << this->sport << std::endl;
}

