#include "Camion.h"

Camion::Camion(int annee, double prix, double charge) : Vehicule(annee, prix), chargeMaximale(charge) {}

void Camion::accelerer() const {
    std::cout << "Je peux atteindre 120 km/h" << std::endl;
}

