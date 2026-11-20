#include "Rectangle.hpp"
#include "Vecteur.hpp"
#include <iostream>

using namespace std;

vector<Point> Rectangle::calculerSommets(const Point& a, const Point& b, double largeur) {
    // On calcule le vecteur direction unitaire a partir des deux premiers sommets A et B
    Vecteur dir = Vecteur(a, b).normaliser();

    // On applique une rotation de 90 degres puis on multiplie par la largeur pour obtenir le cote perpendiculaire
    Vecteur perp = dir.orthogonal() * largeur;

    // On deduit les deux sommets manquants C et D dans le sens du contour du polygone
    Point c = perp.deplacer(b);
    Point d = perp.deplacer(a);

    return {a, b, c, d};
}

Rectangle::Rectangle(const Point& a, const Point& b, double largeur)
    : Polygone(calculerSommets(a, b, largeur)),
      m_longueur(a.distanceTo(b)),
      m_largeur(largeur < 0.0 ? -largeur : largeur) {}

double Rectangle::getLongueur() const {
    return m_longueur;
}

double Rectangle::getLargeur() const {
    return m_largeur;
}

double Rectangle::aire() const {
    return m_longueur * m_largeur;
}

void Rectangle::afficher() const {
    const vector<Point>& s = getSommets();
    cout << "Rectangle [sommets = ";
    for (size_t i = 0; i < s.size(); i++) {
        s[i].afficher();
        if (i + 1 < s.size()) cout << ", ";
    }
    cout << ", L = " << m_longueur
         << ", l = " << m_largeur
         << ", aire = " << aire()
         << ", perimetre = " << perimetre() << "]" << endl;
}
