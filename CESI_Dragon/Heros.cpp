#include "Heros.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Heros::Heros() : nom("Inconnu"), pv(20), pa(5) {}

Heros::Heros(string nom, int pv, int pa) : nom(nom), pv(pv), pa(pa) {}

void Heros::affiche() {
    cout << "Heros [" << nom << "] | PV: " << pv << " | PA: " << pa << endl;
}

int Heros::attaque() {
    int degats = (rand() % (pa / 2 + 1)) + (pa / 2);
    if (rand() % 5 == 0) {
        cout << "*** COUP CRITIQUE ! ***" << endl;
        degats += 5;
    }
    return degats;
}

void Heros::subitDegat(int degat) {
    pv -= degat;
    if (pv < 0) {
        pv = 0;
    }
}

bool Heros::estVivant() {
    return pv > 0;
}