#include "RobotChasseur.h"
#include <iostream>
#include <cmath>

RobotChasseur::RobotChasseur(const std::string& nom, int x, int y, int portee)
    : Robot(nom, x, y, portee) {}

bool RobotChasseur::estDansPortee(const Robot& autre) const {
    int dx = posX - autre.getPosX();
    int dy = posY - autre.getPosY();
    double distance = std::sqrt(dx * dx + dy * dy);
    return distance <= radarPortee;
}

void RobotChasseur::tuer(Robot& autre) {
    if (estDansPortee(autre) && !autre.getEstMort()) {
        autre.setEstMort(true);
        std::cout << autre.getNom() << " a ete tue par " << nom << std::endl;
    }
}

