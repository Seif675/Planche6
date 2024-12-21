#include "Contractuel.h"

Contractuel::Contractuel(const std::string& n, int a, const std::string& s, const std::string& c, const std::string& f)
    : Enseignant(n, a, s, c), Etudiant(n, a, s, f) {}

std::string Contractuel::getPersonne() const {
    return Enseignant::getPersonne() + ", Filiere: " + Etudiant::getFiliere();
}


