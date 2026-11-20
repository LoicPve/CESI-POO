#pragma once 
#include "Vehicules.hpp"

class Bus : public Vehicules {
    private : 
        int seat_capacity;

    public :
        Bus();
        int getseating_capacity();
        void setseating_capacity(int nbPlaces);
        void get_info();


};