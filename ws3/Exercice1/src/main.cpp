#include <iostream>
#include "Vehicules.hpp"
#include "Bus.hpp"
#include "SchoolBus.hpp"

using namespace std;

int main() {
    cout << "=== 1. TEST VEHICULE ===" << endl;
    Vehicules v;
    cout << "Defaut -> Vitesse max: " << v.getmax_speed() << " | Km: " << v.getmileage() << endl;
    v.setmax_speed(150); // Doit forcer a 240 car < 200
    v.setmileage(-50);   // Doit forcer a 0 car < 0
    cout << "Apres test limites -> Vitesse max: " << v.getmax_speed() << " | Km: " << v.getmileage() << endl;

    cout << "\n=== 2. TEST BUS ===" << endl;
    Bus b;
    b.setmax_speed(220);
    b.setmileage(150000);
    b.setseating_capacity(80); // Doit forcer a 50 car > 50
    b.get_info();

    cout << "\n=== 3. TEST SCHOOLBUS & COUNTBIGBUS ===" << endl;
    SchoolBus flotte[3] = {
        SchoolBus("CESI Lille"),
        SchoolBus("Saint-Pierre"),
        SchoolBus("Montebello")
    };

    // Bus 0 : Valide (>= 40 places et < 200 000 km) -> COMPTE
    flotte[0].setseating_capacity(45);
    flotte[0].setmileage(120000);

    // Bus 1 : Trop de km (>= 200 000 km) -> NE COMPTE PAS
    flotte[1].setseating_capacity(50);
    flotte[1].setmileage(210000);

    // Bus 2 : Valide (>= 40 places et < 200 000 km) -> COMPTE
    flotte[2].setseating_capacity(40);
    flotte[2].setmileage(50000);

    for (int i = 0; i < 3; i++) {
        cout << "Ecole : " << flotte[i].getSchoolName() << " -> ";
        flotte[i].get_info();
    }

    int nbBigBus = SchoolBus::countbigbus(flotte, 3);
    cout << "\nNombre de grands bus scolaires (< 200 000 km) : " << nbBigBus << " (Attendu : 2)" << endl;

    return 0;
}