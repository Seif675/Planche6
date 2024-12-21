#include "RobotChasseur.h"
#include <vector>
#include <iostream>

int main() {
    RobotChasseur robotChass1("Optimus", 0, 0, 10);
    robotChass1.deplacer(2, 3);
    robotChass1.afficher();
    std::vector<Robot> robots = {
        Robot("r1", 5, 5, 0),
        Robot("r2", 8, 9, 0),
        Robot("r3", 1, 1, 0)
    };
    for (auto& robot : robots) {
        if (!robot.getEstMort() && robotChass1.estDansPortee(robot)) {
            robotChass1.tuer(robot);
        }
    }
    for (const auto& robot : robots) {
        robot.afficher();
    }
    return 0;
}

