#include "Bus.hpp"
#include "Vehicules.hpp"
#include <iostream>

using namespace std;

Bus::Bus() : seat_capacity(10){}

int Bus::getseating_capacity(){
    return seat_capacity;
}

void Bus::setseating_capacity(int nbPlaces){
    if (nbPlaces>=10 && nbPlaces<=50){
        seat_capacity=nbPlaces;
    }
    else{
        seat_capacity=50;
    }
}

void Bus::get_info(){
    // On accede directement a seat_capacity (attribut de Bus)
    // On utilise les getters herites pour max_speed et mileage
    cout<<"Il s'agit d'un bus d'une capacité de "<< seat_capacity <<" places, avec une vitesse maximale de "<< getmax_speed() <<" kmh et son kilométrage est de "<< getmileage() <<" km." << endl;
}