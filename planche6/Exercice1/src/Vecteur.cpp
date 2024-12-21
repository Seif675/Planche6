#include "Vecteur.h"

Vecteur::Vecteur() : x(0), y(0) {}
Vecteur::Vecteur(double x, double y) : x(x), y(y) {}
void Vecteur::afficher() const {
    std::cout << "(" << x << " , " << y << ")" << std::endl;
}
void Vecteur::deplacer(double dx, double dy) {
    x += dx;
    y += dy;
}
