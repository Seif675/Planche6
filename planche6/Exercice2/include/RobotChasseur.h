#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H

#include "Robot.h"

class RobotChasseur : public Robot {
public:
    RobotChasseur(const std::string& nom, int x, int y, int portee);
    bool estDansPortee(const Robot& autre) const;
    void tuer(Robot& autre);
};

#endif
