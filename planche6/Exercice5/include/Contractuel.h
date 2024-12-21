#ifndef CONTRACTUEL_H
#define CONTRACTUEL_H

#include "Enseignant.h"
#include "Etudiant.h"

class Contractuel : public Enseignant, public Etudiant {
public:
    Contractuel(const std::string& n, int a, const std::string& s, const std::string& c, const std::string& f);

    std::string getPersonne() const;
};

#endif
