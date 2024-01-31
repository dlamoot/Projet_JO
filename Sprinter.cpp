//
// Created by dlamo on 01/01/2024.
//

#include "Sprinter.h"

Sprinter::Sprinter(int age, int poids, double taille, const Pays& pays, std::string nom, std::string prenom, std::string sexe, std::string sport, std::vector<std::string> distances, std::vector<std::string> pb, std::vector<double> performances) : Athlete(age, poids, taille, pays, nom, prenom, sexe, sport), distances(distances), pb(pb), performances(performances) {

}

Sprinter::Sprinter(int age, int poids, double taille, const Pays& pays, std::string nom, std::string prenom, std::string sexe, std::string sport, std::vector<std::string> distances, std::vector<std::string> pb, std::vector<double> performances100m, std::vector<double> performances200m) : Athlete(age, poids, taille, pays, nom, prenom, sexe, sport), distances(distances), pb(pb), performances100m(performances100m), performances200m(performances200m) {

}

Sprinter::~Sprinter() {
   //std::cout << "Destruction de l'objet Sprinter" << std::endl;
}

double Sprinter::performance_moy(std::vector<double> performances) const {
    double moyenne = 0;
    for (int i = 0; i < performances.size(); i++) {
        moyenne += performances[i];
    }
    return moyenne / performances.size();
}

double Sprinter::perf_jour_100m(std::vector<double> performances) {
    std::random_device rd;
    std::mt19937_64 generator(rd());
    std::uniform_real_distribution<double> distribution(performance_moy(performances) - 0.1, performance_moy(performances) + 0.08);
    perf_100m = distribution(generator);
    return perf_100m;
}

double Sprinter::perf_jour_200m(std::vector<double> performances) {
    std::random_device rd;
    std::mt19937_64 generator(rd());
    std::uniform_real_distribution<double> distribution(performance_moy(performances) - 0.25, performance_moy(performances) + 0.1);
    perf_200m = distribution(generator);
    return perf_200m;
}

/*void Sprinter::afficher() const {
    Athlete::afficher();
    std::cout << "Distances : ";
    for (int i = 0; i < this->distances.size(); i++) {
        std::cout << this->distances[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Performances sur 100m : ";
    for (int i = 0; i < this->performances100m.size(); i++) {
        std::cout << this->performances100m[i] << " ";
    }
    std::cout << std::endl;
}*/

std::vector<double> Sprinter::getPerformances(std::string epreuve) {
    if (epreuve == "100m") {
        for (int i = 0; i < this->distances.size(); i++) {
            if (this->distances[i] == "100m") {
                if (this->distances.size() == 1){
                    return this->performances;
                }
                return this->performances100m;
            }
        }
    } else if (epreuve == "200m") {
        for (int i = 0; i < this->distances.size(); i++) {
            if (this->distances[i] == "200m") {
                if (this->distances.size() == 1){
                    return this->performances;
                }
                return this->performances200m;
            }
        }
    } else {
        std::cout << "Erreur" << std::endl;
        exit(1);
    }
}

double Sprinter::getPerf100m() {
    return this->perf_100m;
}

double Sprinter::getPerf200m() {
    return this->perf_200m;
}

std::string Sprinter::afficher_interface(std::string epreuve) const {
    std::string texte = "";
    texte += this->nom + " ";
    texte += this->prenom + " ";
    texte += this->pays.getNom() + " ";
    if (epreuve == "100m") {
        for (int i = 0; i < this->distances.size(); i++) {
            if (this->distances[i] == "100m") {
                texte += "PB : " + this->pb[i] + "\n";
            }
        }
    } else if (epreuve == "200m") {
        for (int i = 0; i < this->distances.size(); i++) {
            if (this->distances[i] == "200m") {
                texte += "PB : " + this->pb[i] + "\n";
            }
        }
    } else if (epreuve == "400m") {
        for (int i = 0; i < this->distances.size(); i++) {
            if (this->distances[i] == "400m") {
                texte += "PB : " + this->pb[i] + "\n";
            }
        }
    } else {
        std::cout << "Erreur" << std::endl;
        exit(1);
    }
    return texte;
}