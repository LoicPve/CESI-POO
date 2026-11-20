#include "Vehicules.hpp"
#include "Bus.hpp"

using namespace std;

Vehicules::Vehicules() : max_speed(240), mileage(0) {}

void Vehicules::setmax_speed(int vit){
    if (vit>200){
        max_speed=vit;
    }
    else{
        max_speed=240;
    }
}

int Vehicules::getmax_speed(){
    return max_speed;
}

void Vehicules::setmileage(int dist){
    if (dist<0){
        mileage=0;
    }
    else{
        mileage=dist;
    }
}

int Vehicules::getmileage(){
    return mileage;
}