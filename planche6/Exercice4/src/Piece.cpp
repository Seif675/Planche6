#include "Piece.h"

Piece::Piece(const std::string& couleur, int x, int y) : couleur(couleur), posX(x), posY(y) {}

void Piece::afficher() const {
    std::cout << "Position: (" << posX << ", " << posY << "), Couleur: " << couleur << std::endl;
}

