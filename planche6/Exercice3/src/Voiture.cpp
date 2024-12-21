#include "Voiture.h"

Voiture::Voiture(int annee, double prix, int places) : Vehicule(annee, prix), nombreDePlaces(places) {}

void Voiture::accelerer() const {
    std::cout << "Je peux atteindre 200 km/h" << std::endl;
}

