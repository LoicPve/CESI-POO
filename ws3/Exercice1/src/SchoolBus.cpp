#include "SchoolBus.hpp"
#include "Vehicules.hpp"
#include "Bus.hpp"

SchoolBus::SchoolBus(std::string sn) {
    school_name = sn;
}

std::string SchoolBus::getSchoolName() {
    return school_name;
}

void SchoolBus::setSchoolName(std::string sn) {
    school_name = sn;
}

int SchoolBus::countbigbus(SchoolBus t[], int size) {
    int compteur = 0;
    for (int i = 0; i < size; i++) {
        if (t[i].getseating_capacity() >= 40 && t[i].getmileage() < 200000) {
            compteur++;
        }
    }
    return compteur;
}