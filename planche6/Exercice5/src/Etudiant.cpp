#include "Etudiant.h"

Etudiant::Etudiant(const std::string& n, int a, const std::string& s, const std::string& f)
    : Personne(n, a, s), filiere(f) {}
std::string Etudiant::getFiliere() const {
    return filiere;
}
void Etudiant::setFiliere(const std::string& f) {
    filiere = f;
}
std::string Etudiant::getPersonne() const {
    return Personne::getPersonne() + ", Filiere: " + filiere;
}

