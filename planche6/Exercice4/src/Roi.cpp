#include "Roi.h"

Roi::Roi(const std::string& couleur, int x, int y) : Piece(couleur, x, y) {}

void Roi::deplacer() {
    if (posX < 8 && posY < 8) {
        posX += 1;
        posY += 1;
        std::cout << "Le Roi a avance a la position: (" << posX << ", " << posY << ")" << std::endl;
    } else {
        std::cout << "Le Roi depasse les limites de l'echiquier !" << std::endl;
    }
}
