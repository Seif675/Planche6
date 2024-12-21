#ifndef PIECE_H
#define PIECE_H

#include <string>
#include <iostream>

class Piece {
protected:
    std::string couleur;
    int posX, posY;

public:
    Piece(const std::string& couleur, int x, int y);
    virtual void deplacer() = 0;
    virtual void afficher() const;
};

#endif

