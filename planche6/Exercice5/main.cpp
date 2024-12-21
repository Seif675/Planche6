#include <iostream>
#include "Personne.h"
#include "Enseignant.h"
#include "Etudiant.h"
#include "Contractuel.h"

int main() {
    Personne p("Ali", 30, "Homme");
    std::cout << p.getPersonne() << std::endl;
    Enseignant e("Ahmed", 40, "Homme", "Professeur de Mathématiques");
    std::cout << e.getPersonne() << std::endl;
    Etudiant et("Sarah", 20, "Femme", "Informatique");
    std::cout << et.getPersonne() << std::endl;
    Contractuel c("Khaled", 35, "Homme", "Professeur de Physique", "Chimie");
    std::cout << c.getPersonne() << std::endl;
    return 0;
}

