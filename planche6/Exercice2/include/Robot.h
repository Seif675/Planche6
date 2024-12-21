#ifndef ROBOT_H
#define ROBOT_H

#include <string>

class Robot {
protected:
    std::string nom;
    int posX, posY;
    int radarPortee;
    bool estMort;

public:
    Robot(const std::string& nom, int x, int y, int portee);
    void deplacer(int pasX, int pasY);
    void afficher() const;
    bool getEstMort() const;
    void setEstMort(bool mort);
    int getPosX() const;
    int getPosY() const;
    std::string getNom() const;
};

#endif

