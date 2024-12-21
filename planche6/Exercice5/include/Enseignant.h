#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include "Personne.h"

class Enseignant : public Personne {
private:
    std::string charge;
public:
    Enseignant(const std::string& n, int a, const std::string& s, const std::string& c);
    std::string getCharge() const;
    void setCharge(const std::string& c);
    std::string getPersonne() const;
};

#endif

