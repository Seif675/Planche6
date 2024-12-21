#include "Vehicule.h"
#include "Voiture.h"
#include "Camion.h"
#include <vector>

int main() {
    Voiture v1(2020, 15000, 5);
    Camion c1(2018, 30000, 15000);

    v1.afficher();
    c1.afficher();

    v1.accelerer();
    c1.accelerer();

    std::vector<Vehicule*> parc;
    parc.push_back(new Voiture(2021, 20000, 4));
    parc.push_back(new Camion(2019, 35000, 18000));

    for (auto vehicule : parc) {
        vehicule->afficher();
        vehicule->accelerer();
    }

    for (auto vehicule : parc) {
        delete vehicule;
    }

    return 0;
}
