#include "Triangle.hpp"
#include <cmath>
#include <iostream>

using namespace std;

Triangle::Triangle(const Point& a, const Point& b, const Point& c)
    : Polygone({a, b, c}) {}

double Triangle::aire() const {
    // On passe par le getter herite de Polygone pour recuperer les 3 sommets
    const vector<Point>& s = getSommets();
    const Point& a = s[0];
    const Point& b = s[1];
    const Point& c = s[2];

    // Aire par la moitie de la valeur absolue du produit vectoriel 2D : 0.5 * |AB x AC|
    double abx = b.getX() - a.getX();
    double aby = b.getY() - a.getY();
    double acx = c.getX() - a.getX();
    double acy = c.getY() - a.getY();

    return 0.5 * abs(abx * acy - aby * acx);
}

void Triangle::afficher() const {
    const vector<Point>& s = getSommets();
    cout << "Triangle [sommets = ";
    for (size_t i = 0; i < s.size(); i++) {
        s[i].afficher();
        if (i + 1 < s.size()) cout << ", ";
    }
    cout << ", aire = " << aire()
         << ", perimetre = " << perimetre() << "]" << endl;
}
