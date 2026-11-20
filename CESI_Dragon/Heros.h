#pragma once
#include <string>

class Heros {
private:
    std::string nom; 
    int pv;
    int pa;

public:
    Heros();
    Heros(std::string nom, int pv, int pa);

    void affiche();
    int attaque();
    void subitDegat(int degat);
    bool estVivant();
};