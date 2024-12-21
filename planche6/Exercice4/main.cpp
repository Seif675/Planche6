#include "Piece.h"
#include "Pion.h"
#include "Roi.h"
#include <vector>

int main() {
    std::vector<Piece*> pieces;
    pieces.push_back(new Pion("Blanc", 4, 2));
    pieces.push_back(new Pion("Noir", 3, 6));
    pieces.push_back(new Roi("Blanc", 5, 5));
    for (auto& piece : pieces) {
        piece->afficher();
    }
    for (auto& piece : pieces) {
        piece->deplacer();
    }
    for (auto& piece : pieces) {
        delete piece;
    }
    return 0;
}

