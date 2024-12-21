#include "Vecteur.h"
#include "Vecteur3D.h"
#include <iostream>

int main() {
    Vecteur vecteur1;
    std::cout << "vecteur nul:";
    vecteur1.afficher();
    vecteur1.deplacer(3.5, 4.2);
    std::cout << "apres deplacement : ";
    vecteur1.afficher();
    Vecteur3D* vecteur3D = new Vecteur3D(1.0, 2.0, 3.0);
    std::cout << "vecteur 3D: ";
    vecteur3D->afficher();
    vecteur3D->deplacer(0.5, 0.5, 0.5);
    std::cout << "apres delacement du vecteur 3D:";
    vecteur3D->afficher();
    delete vecteur3D;
    return 0;
}

