#include "voiture.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

int Voiture::compteur = 0; //initialisation compteur globale

Voiture::Voiture()  {initialiser(100,3);}
Voiture::Voiture(double vitesseMax, double acceleration)  {initialiser(vitesseMax, acceleration);}

Voiture::~Voiture(){compteur--;}

void Voiture::accelerer(){
    if ((vitesse+acceleration) <= vitesseMax){
        while((vitesse+acceleration) <= vitesseMax){
            vitesse+=acceleration;
        }}
    else{
        vitesse = vitesseMax;
    }
}


void Voiture::initialiser(double vMax, double acc) {
    vitesse = 0;
    if (vMax > 100) {
        vitesseMax = 100;
    } 
    else if (vMax < 0) {
        vitesseMax = 0;
    } 
    else {
        vitesseMax = vMax;
    }
    compteur++;
}

void Voiture::afficher(){
    cout<< "La voiture a une vitesse actuelle de : "<<vitesse<<" km/h, une vitesse maximale de : "<<vitesseMax<<" km/h et une accélération de :"<<acceleration<<" km/h."<<endl;
}