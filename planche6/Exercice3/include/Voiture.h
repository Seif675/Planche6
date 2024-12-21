#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"

class Voiture : public Vehicule {
private:
    int nombreDePlaces;

public:
    Voiture(int annee, double prix, int places);
    void accelerer() const override;
};

#endif
