#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Heros.h"
#include "Creature.h"

using namespace std;

int main() {
    srand(time(NULL));

    Heros heros("Hrun", 20, 8);
    Creature creature(15, 5, 1);

    cout << "--- DEBUT DU COMBAT ---" << endl;
    heros.affiche();
    creature.affiche();
    cout << "-----------------------\n" << endl;

    int tour = 1;
    while (heros.estVivant() && creature.estVivant()) {
        cout << "Tour " << tour << " :" << endl;

        int degatsHeros = heros.attaque();
        cout << "> Hrun attaque et inflige " << degatsHeros << " degats." << endl;
        creature.subitDegat(degatsHeros);

        if (!creature.estVivant()) {
            cout << "\nLA CREATURE EST MORTE ! Hrun remporte la victoire !" << endl;
            break;
        }

        int degatsCreature = creature.attaque();
        cout << "> La creature replique et inflige " << degatsCreature << " degats." << endl;
        heros.subitDegat(degatsCreature);

        if (!heros.estVivant()) {
            cout << "\nHRUN EST MORT ! La creature a gagne !" << endl;
            break;
        }

        cout << endl;
        tour++;
    }

    return 0;
}


void foo() {
 Creature c3;
 cout << "Nombre de créatures: " << Creature::cpt << endl;
}

void test1() {
 cout << "Test 1: \n";
 Creature c1;
 Creature c2(10, 2, 2);
 cout << "Nombre de créatures: " << Creature::cpt << endl;
 foo();
 cout << "Nombre de créatures: " << Creature::cpt << endl;
}