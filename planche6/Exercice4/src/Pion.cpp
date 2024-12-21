#include "Pion.h"

Pion::Pion(const std::string& couleur, int x, int y) : Piece(couleur, x, y) {}

void Pion::deplacer() {
    if (posY < 8) {
        posY += 1;
        std::cout << "Le Pion a avance a la position: (" << posX << ", " << posY << ")" << std::endl;
    } else {
        std::cout << "Le Pion depasse les limites de l'echiquier !" << std::endl;
    }
}
