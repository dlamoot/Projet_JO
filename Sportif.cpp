//
// Created by dlamo on 01/01/2024.
//

#include "Sportif.h"

Sportif::Sportif(int age, int poids, double taille, Pays pays, std::string nom, std::string prenom, std::string sexe): age(age), poids(poids), taille(taille), pays(pays), nom(nom), prenom(prenom), sexe(sexe) {
}

Sportif::~Sportif() {
    //std::cout << "Destruction de l'objet Sportif" << std::endl;
}

int Sportif::getAge() {
    return this->age;
}

int Sportif::getPoids() {
    return this->poids;
}

double Sportif::getTaille() {
    return this->taille;
}

std::string Sportif::getNom() {
    return this->nom;
}

std::string Sportif::getPrenom() {
    return this->prenom;
}

std::string Sportif::getSexe() {
    return this->sexe;
}

std::string Sportif::getPays() {
    return this->pays.getNom();
}

void Sportif::afficher() const {
    std::cout << "Nom : " << this->nom <<std::endl;
    std::cout << "Prenom : " << this->prenom << std::endl;
    std::cout << "Sexe : " << this->sexe <<  std::endl;
    std::cout << "Age : " << this->age << " ans" <<  std::endl;
    std::cout << "Poids : " << this->poids << " kg" <<  std::endl;
    std::cout << "Taille : " << this->taille << " cm" <<  std::endl;
    std::cout << "Pays : " << this->pays.getNom() << std::endl;
}

std::string Sportif::afficher_interface() const {
    std::string texte = "";
    texte += this->nom + " ";
    texte += this->prenom + " ";
    texte += this->pays.getNom() + "\n";
    return texte;
}