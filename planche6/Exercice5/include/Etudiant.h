#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "Personne.h"

class Etudiant : public Personne {
private:
    std::string filiere;
public:
    Etudiant(const std::string& n, int a, const std::string& s, const std::string& f);
    std::string getFiliere() const;
    void setFiliere(const std::string& f);
    std::string getPersonne() const;
};

#endif
