#include "Vehicule.h"

int Vehicule::serie = 142;

Vehicule::Vehicule(int annee, double prix) : anneeModele(annee), prix(prix) {
    numeroVehicule = serie;
    serie++;

    if (numeroVehicule >= 10000) {
        serie = 1;
    }
}

void Vehicule::afficher() const {
    std::cout << numeroVehicule << " TUN " << serie
              << ", Annee: " << anneeModele << ", Prix: " << prix << "€" << std::endl;
}

