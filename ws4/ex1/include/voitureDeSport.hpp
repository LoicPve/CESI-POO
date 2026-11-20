#pragma once
#include "voiture.hpp"

class VoitureDeSport : public Voiture{
    private:
    public:
    static int compteur;
    VoitureDeSport();
    VoitureDeSport(double vitesseMax, double acceleration);
    ~VoitureDeSport();
    void initialiser(double vitesseMax, double acceleration);
    void afficher();
    void accelerer();
};