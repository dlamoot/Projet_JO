//
// Created by dlamo on 02/01/2024.
//

#include "Sprint_athle.h"

#include <utility>

Sprint_athle::Sprint_athle(std::string nom, std::string lieu, std::string date, std::string epreuve, std::string sexe) : Athletisme(std::move(nom), std::move(lieu)), date(std::move(date)), epreuve(std::move(epreuve)), sexe(std::move(sexe)) {
    //std::cout << "Bienvenue pour la finale du " << this->epreuve << " " << this->sexe << " du " << this->date << " a " << this->lieu << "." <<  std::endl;
}

Sprint_athle::~Sprint_athle() {
    //std::cout << "Destruction de l'objet Sprint_athle" << std::endl;
}

void Sprint_athle::afficher() const {
    Athletisme::afficher();
    std::cout << "Date : " << this->date << std::endl;
    if (this->sexe == "M") {
        std::cout << "Epreuve : " << this->epreuve << " masculin" << std::endl;
    } else if(this->sexe == "F") {
        std::cout << "Epreuve : " << this->epreuve << " feminin" << std::endl;
    } else {
        std::cout << "Erreur" << std::endl;
    }
}

Sprinter Sprint_athle::retrouverPerf(double perf, Sprinter sprinter[8], std::string epreuve) {
    if (epreuve == "100m") {
        for(int i = 0; i < 8; i++) {
            if (perf == sprinter[i].getPerf100m()) {
                return sprinter[i];
            }
        }
    } else if (epreuve == "200m") {
        for(int i = 0; i < 8; i++) {
            if (perf == sprinter[i].getPerf200m()) {
                return sprinter[i];
            }
        }
    }
    exit(1);
}

void Sprint_athle::afficherClassement(std::priority_queue<double, std::vector<double>, std::greater<double>> classement, Sprinter sprinter[8], std::string epreuve) {
    std::cout << "Classement : " << std::endl;
    for(int i = 0; i < 8; i++) {
        std::cout << i + 1 << " : " << retrouverPerf(classement.top(), sprinter, epreuve).getNom() << " " << retrouverPerf(classement.top(), sprinter, epreuve).getPrenom() << " " << retrouverPerf(classement.top(), sprinter, epreuve).getPays() << " " << std::fixed << std::setprecision(2) << classement.top()  << std::endl;
        classement.pop();
    }
}


//Fonction permettant l'affichage dans l'interface graphique
std::string Sprint_athle::afficherClassementToString(std::priority_queue<double, std::vector<double>, std::greater<double>> classement, Sprinter sprinter[8], std::string epreuve) {
    std::ostringstream output;
    output << "Classement : " << std::endl;
    for (int i = 0; i < 8; i++) {
        output << i + 1 << " : " << retrouverPerf(classement.top(), sprinter, epreuve).getNom() << " "
               << retrouverPerf(classement.top(), sprinter, epreuve).getPrenom() << " "
               << retrouverPerf(classement.top(), sprinter, epreuve).getPays() << " "
               << std::fixed << std::setprecision(2) << classement.top() << std::endl;
        classement.pop();
    }
    return output.str();
}


//Initialise et simule une des épreuves possibles de sprint
std::string Sprint_athle::setEpreuve(std::string epreuve, std::string sexe, Sprinter sprinter[8]) {
    this->epreuve = epreuve;
    this->sexe = sexe;
    std::priority_queue<double, std::vector<double>, std::greater<double>> classement; // Classement des performances ordonné selon le résultat des sprinters
    if (this->sexe == "M") {
        if (epreuve == "100m") {
            for(int i = 0; i < 8; ++i) {
                if (sprinter[i].getSexe() == "M") {
                    classement.push(sprinter[i].perf_jour_100m(sprinter[i].getPerformances(epreuve)));
                    }
                else{
                    std::cout << "Le sprinter n'est pas un homme" << std::endl;
                }
            }
           //afficherClassement(classement, sprinter, epreuve);
           return afficherClassementToString(classement, sprinter, epreuve);
        } else if (epreuve == "200m") {
            for(int i = 0; i < 8; ++i) {
                if (sprinter[i].getSexe() == "M") {
                    classement.push(sprinter[i].perf_jour_200m(sprinter[i].getPerformances(epreuve)));
                }
                else{
                    std::cout << "Le sprinter n'est pas un homme" << std::endl;
                }
            }
            //afficherClassement(classement, sprinter, epreuve);
            return afficherClassementToString(classement, sprinter, epreuve);
        } else if (epreuve == "400m") {
            std::cout << "Epreuve : " << this->epreuve << " masculin" << std::endl;
        } else {
            std::cout << "Erreur" << std::endl;
        }
    } else if(this->sexe == "F") {
        if (epreuve == "100m") {
            for(int i = 0; i < 8; ++i) {
                if (sprinter[i].getSexe() == "F") {
                    classement.push(sprinter[i].perf_jour_100m(sprinter[i].getPerformances(epreuve)));
                }
                else{
                    std::cout << "La sprinteuse n'est pas une femme" << std::endl;
                }
            }
            //afficherClassement(classement, sprinter, epreuve);
            return afficherClassementToString(classement, sprinter, epreuve);
        } else if (epreuve == "200m") {
            for(int i = 0; i < 8; ++i) {
                if (sprinter[i].getSexe() == "F") {
                    classement.push(sprinter[i].perf_jour_200m(sprinter[i].getPerformances(epreuve)));
                }
                else{
                    std::cout << "La sprinteuse n'est pas une femme" << std::endl;
                }
            }
            //afficherClassement(classement, sprinter, epreuve);
            return afficherClassementToString(classement, sprinter, epreuve);
        }
    } else {
            std::cout << "Erreur" << std::endl;
    }
}

Sprint_athle& Sprint_athle::operator=(const Sprint_athle& autre) {
    if (this != &autre) {
        // Copie des membres
        this->nom = autre.nom;
        this->lieu = autre.lieu;
        this->date = autre.date;
        this->epreuve = autre.epreuve;
        this->sexe = autre.sexe;
    }
    return *this;
}


bool Sprint_athle::operator==(const Sprint_athle& autre) const {
    return (this->nom == autre.nom && this->lieu == autre.lieu &&
            this->date == autre.date && this->epreuve == autre.epreuve &&
            this->sexe == autre.sexe);
}



