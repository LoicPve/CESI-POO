#include "Creature.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int Creature::compteur = 0 //initialisation compteur globale

Creature::Creature() : pv(10), pa(5), niveau(1) {compteur ++;} //creation creature stat de base + incrementation compteur globale

Creature::Creature(int pv, int pa, int niv) : pv(pv), pa(pa), niveau(niv) {compteur ++;}

Creature::~Creature(){compteur--;}  //destructeur + reduction compteur globale

void Creature::affiche() {
    cout << "Creature (Niveau " << niveau << ") | PV: " << pv << " | PA: " << pa << endl;
}

int Creature::attaque() {
    int degats = (rand() % (pa / 2 + 1)) + (pa / 2);
    return degats;
}

void Creature::subitDegat(int degat) {
    pv -= degat;
    if (pv < 0) {
        pv = 0;
    }
}

bool Creature::estVivant() {
    return pv > 0;
}

