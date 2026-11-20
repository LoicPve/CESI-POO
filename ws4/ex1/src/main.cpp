#include "voiture.hpp"
#include "voitureDeSport.hpp"

int main() {

    Voiture voiture;
    voiture.afficher();
    voiture.accelerer();
    voiture.afficher();

    VoitureDeSport voiture2sport;
    voiture2sport.afficher();
    voiture2sport.accelerer();
    voiture2sport.afficher();

    return 0;
}