
#include "Vecteur3D.h"
Vecteur3D::Vecteur3D() : Vecteur(), z(0) {}
Vecteur3D::Vecteur3D(double x, double y, double z) : Vecteur(x, y), z(z) {}
void Vecteur3D::afficher() const {
    std::cout << "(" << x << " , " << y << " , " << z << ")" << std::endl;
}
void Vecteur3D::deplacer(double dx, double dy, double dz) {
    x += dx;
    y += dy;
    z += dz;
}
