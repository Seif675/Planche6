#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>

class Personne {
protected:
    std::string nom;
    int age;
    std::string sexe;

public:
    Personne(const std::string& n, int a, const std::string& s);
    std::string getNom() const;
    int getAge() const;
    std::string getSexe() const;
    void setNom(const std::string& n);
    void setAge(int a);
    void setSexe(const std::string& s);
    std::string getPersonne() const;
};

#endif

