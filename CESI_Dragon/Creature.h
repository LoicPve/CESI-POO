#pragma once

class Creature {
private:
    int pv;
    int pa;
    int niveau;

public:
    static int compteur; //compteur commun pour nbr de creatures 

    Creature();
    Creature(int pv, int pa, int niv);
    ~Creature(); //destructeur 

    void affiche();
    int attaque();
    void subitDegat(int degat);
    bool estVivant();
};