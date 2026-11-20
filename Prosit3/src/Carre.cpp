#include "Carre.hpp"
#include "Vecteur.hpp"
#include <iostream>

using namespace std;

vector<Point> Carre::calculerSommets(const Point& a, const Point& b) {
    // La longueur du cote correspond a la distance entre les deux premiers sommets A et B
    double cote = a.distanceTo(b);

    // On determine le vecteur direction unitaire puis son orthogonal mis a l'echelle du cote
    Vecteur dir = Vecteur(a, b).normaliser();
    Vecteur perp = dir.orthogonal() * cote;

    // Les deux derniers sommets C et D sont obtenus par translation orthogonale
    Point c = perp.deplacer(b);
    Point d = perp.deplacer(a);

    return {a, b, c, d};
}

Carre::Carre(const Point& a, const Point& b)
    : Polygone(calculerSommets(a, b)), m_cote(a.distanceTo(b)) {}

double Carre::getCote() const {
    return m_cote;
}

double Carre::aire() const {
    return m_cote * m_cote;
}

void Carre::afficher() const {
    const vector<Point>& s = getSommets();
    cout << "Carre [sommets = ";
    for (size_t i = 0; i < s.size(); i++) {
        s[i].afficher();
        if (i + 1 < s.size()) cout << ", ";
    }
    cout << ", cote = " << m_cote
         << ", aire = " << aire()
         << ", perimetre = " << perimetre() << "]" << endl;
}
