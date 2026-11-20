#include "voitureDeSport.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

int VoitureDeSport::compteur = 0; //initialisation compteur globale

VoitureDeSport::VoitureDeSport()  {initialiser(200,8);}
VoitureDeSport::VoitureDeSport(double vitesseMax, double acceleration)  {initialiser(vitesseMax, acceleration);}

VoitureDeSport::~VoitureDeSport(){compteur--;}


void VoitureDeSport::initialiser(double vMax, double acc) {
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

void VoitureDeSport::afficher(){
    cout<< "La voiture de SPORT a une vitesse actuelle de : "<<vitesse<<" km/h, une vitesse maximale de : "<<vitesseMax<<" km/h et une accélération de :"<<acceleration<<" km/h."<<endl;
}

void VoitureDeSport::accelerer(){
    if ((vitesse+acceleration) <= vitesseMax){
        while((vitesse+acceleration) <= vitesseMax){
            vitesse+=acceleration;
        }}
    else{
        vitesse = vitesseMax;
    }
    cout<<"C'est une voiture de SPORT"<<endl;
}