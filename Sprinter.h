//
// Created by dlamo on 01/01/2024.
//

#ifndef TEST_JO_SPRINTER_H
#define TEST_JO_SPRINTER_H

#include "Athlete.h"
#include <vector>

class Sprinter : public Athlete {
    public:
    Sprinter(int age, int poids, double taille, const Pays& pays, std::string nom, std::string prenom, std::string sexe, std::string sport, std::vector<std::string> distances, std::vector<std::string> pb, std::vector<double> performances);
    Sprinter(int age, int poids, double taille, const Pays& pays, std::string nom, std::string prenom, std::string sexe, std::string sport, std::vector<std::string> distances, std::vector<std::string> pb, std::vector<double> performances100m, std::vector<double> perfomances200m);
    ~Sprinter();
    virtual double performance_moy(std::vector<double> performances) const;
    virtual double perf_jour_100m(std::vector<double> performances);
    virtual double perf_jour_200m(std::vector<double> performances);
    //virtual void afficher() const;
    virtual std::string afficher_interface(std::string epreuve) const;
    std::vector<double> getPerformances(std::string epreuve);
    double getPerf100m();
    double getPerf200m();

protected:
        std::vector<std::string> distances;
        std::vector<std::string> pb;
        std::vector<double> performances;
        std::vector<double> performances100m;
        std::vector<double> performances200m;
        double perf_100m;
        double perf_200m;
};

#endif //TEST_JO_SPRINTER_H
