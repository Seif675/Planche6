#ifndef ROI_H
#define ROI_H

#include "Piece.h"

class Roi : public Piece {
public:
    Roi(const std::string& couleur, int x, int y);
    void deplacer() override;
};

#endif
