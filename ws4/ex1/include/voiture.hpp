#pragma once

class Voiture{
    private:
    
    protected:
    double vitesseMax;
    double vitesse;
    double acceleration;

    public:
    static int compteur;
    Voiture();
    Voiture(double vitesseMax, double acceleration);
    ~Voiture();
    void accelerer();
    void initialiser(double vitesseMax, double acceleration);
    void afficher();
};