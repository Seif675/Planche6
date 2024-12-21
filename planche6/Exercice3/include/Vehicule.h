#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>
#include <iostream>

class Vehicule {
protected:
    static int serie;
    int numeroVehicule;
    int anneeModele;
    double prix;

public:
    Vehicule(int annee, double prix);
    virtual void accelerer() const = 0;
    void afficher() const;
};

#endif

