#include "Personne.h"

Personne::Personne(const std::string& n, int a, const std::string& s)
    : nom(n), age(a), sexe(s) {}
std::string Personne::getNom() const {
    return nom;
}
int Personne::getAge() const {
    return age;
}
std::string Personne::getSexe() const {
    return sexe;
}
void Personne::setNom(const std::string& n) {
    nom = n;
}
void Personne::setAge(int a) {
    age = a;
}
void Personne::setSexe(const std::string& s) {
    sexe = s;
}
std::string Personne::getPersonne() const {
    return "Nom: " + nom + ", Age: " + std::to_string(age) + ", Sexe: " + sexe;
}

