#include "Cercle.hpp"
#include <iostream>

using namespace std;

// Constante Pi utilisee pour les calculs geometriques du cercle
static const double PI = 3.14159265358979323846;

Cercle::Cercle(const Point& centre, double rayon)
    : m_centre(centre) {
    // Verification simple pour eviter un rayon negatif
    setRayon(rayon);
}

Point Cercle::getCentre() const {
    return m_centre;
}

double Cercle::getRayon() const {
    return m_rayon;
}

void Cercle::setCentre(const Point& centre) {
    m_centre = centre;
}

void Cercle::setRayon(double rayon) {
    if (rayon < 0.0) {
        m_rayon = 0.0;
    } else {
        m_rayon = rayon;
    }
}

double Cercle::aire() const {
    return PI * m_rayon * m_rayon;
}

double Cercle::perimetre() const {
    return 2.0 * PI * m_rayon;
}

void Cercle::afficher() const {
    cout << "Cercle [centre = ";
    m_centre.afficher();
    cout << ", rayon = " << m_rayon
         << ", aire = " << aire()
         << ", perimetre = " << perimetre() << "]" << endl;
}
