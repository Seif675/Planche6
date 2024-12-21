#ifndef VECTEUR3D_H
#define VECTEUR3D_H

#include "Vecteur.h"

class Vecteur3D : public Vecteur {
private:
    double z;

public:
    Vecteur3D();
    Vecteur3D(double x, double y, double z);
    void afficher() const;
    void deplacer(double dx, double dy, double dz);
};

#endif
