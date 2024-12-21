#ifndef CAMION_H
#define CAMION_H

#include "Vehicule.h"

class Camion : public Vehicule {
private:
    double chargeMaximale;

public:
    Camion(int annee, double prix, double charge);
    void accelerer() const override;
};

#endif
