#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>

class Vecteur {
protected:
    double x, y;

public:
    Vecteur();
    Vecteur(double x, double y);
    void afficher() const;
    void deplacer(double dx, double dy);
};

#endif
