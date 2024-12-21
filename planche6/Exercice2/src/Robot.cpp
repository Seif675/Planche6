#include "Robot.h"
#include <iostream>
#include <cmath>

Robot::Robot(const std::string& nom, int x, int y, int portee)
    : nom(nom), posX(x), posY(y), radarPortee(portee), estMort(false) {}
void Robot::deplacer(int pasX, int pasY) {
    posX += pasX;
    posY += pasY;
}
void Robot::afficher() const {
    std::cout << "nom: " << nom
              << ", position: (" << posX << ", " << posY << ")"
              << ", portee: " << radarPortee
              << ", statut: " << (estMort ? "mort" : "vivant") << std::endl;
}
bool Robot::getEstMort() const {
    return estMort;
}
void Robot::setEstMort(bool mort) {
    estMort = mort;
}
int Robot::getPosX() const {
    return posX;
}
int Robot::getPosY() const {
    return posY;
}
std::string Robot::getNom() const {
    return nom;
}
