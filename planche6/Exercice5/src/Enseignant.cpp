#include "Enseignant.h"

Enseignant::Enseignant(const std::string& n, int a, const std::string& s, const std::string& c)
    : Personne(n, a, s), charge(c) {}
std::string Enseignant::getCharge() const {
    return charge;
}
void Enseignant::setCharge(const std::string& c) {
    charge = c;
}
std::string Enseignant::getPersonne() const {
    return Personne::getPersonne() + ", Charge: " + charge;
}

