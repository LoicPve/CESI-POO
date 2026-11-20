#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>
#include "ObjetGeometrique.hpp"
#include "Cercle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"

using namespace std;

// Fonction utilitaire pour comparer deux flottants avec une tolerance d'arrondi
bool egalApprox(double a, double b, double eps = 1e-6) {
    return abs(a - b) < eps;
}

int main() {
    cout << "=== 1. TEST CERCLE ===" << endl;
    Cercle c(Point(1.0, 2.0), 3.0);
    c.afficher();
    assert(egalApprox(c.aire(), 28.27433388));
    assert(egalApprox(c.perimetre(), 18.84955592));

    cout << "\n=== 2. TEST TRIANGLE ===" << endl;
    // Triangle rectangle 3-4-5 : aire attendue = 6, perimetre attendu = 12
    Triangle t(Point(0.0, 0.0), Point(3.0, 0.0), Point(0.0, 4.0));
    t.afficher();
    assert(egalApprox(t.aire(), 6.0));
    assert(egalApprox(t.perimetre(), 12.0));

    cout << "\n=== 3. TEST RECTANGLE (ALIGNÉ ET INCLINÉ) ===" << endl;
    Rectangle r1(Point(0.0, 0.0), Point(4.0, 0.0), 2.0);
    r1.afficher();
    assert(egalApprox(r1.aire(), 8.0));
    assert(egalApprox(r1.perimetre(), 12.0));

    // Rectangle incline (longueur = 5 grace au triplet 3-4-5, largeur = 2)
    Rectangle r2(Point(0.0, 0.0), Point(3.0, 4.0), 2.0);
    r2.afficher();
    assert(egalApprox(r2.aire(), 10.0));
    assert(egalApprox(r2.perimetre(), 14.0));

    cout << "\n=== 4. TEST CARRE (ALIGNÉ ET INCLINÉ) ===" << endl;
    Carre k1(Point(0.0, 0.0), Point(3.0, 0.0));
    k1.afficher();
    assert(egalApprox(k1.aire(), 9.0));
    assert(egalApprox(k1.perimetre(), 12.0));

    // Carre incline de cote sqrt(2)
    Carre k2(Point(0.0, 0.0), Point(1.0, 1.0));
    k2.afficher();
    assert(egalApprox(k2.aire(), 2.0));
    assert(egalApprox(k2.perimetre(), 4.0 * sqrt(2.0)));

    cout << "\n=== 5. TEST POLYMORPHISME (OBJETGEOMETRIQUE*) ===" << endl;
    // Manipulation uniforme de toutes les formes via des pointeurs sur la classe mere abstraite
    vector<ObjetGeometrique*> formes = {
        new Cercle(Point(0.0, 0.0), 1.0),
        new Triangle(Point(0.0, 0.0), Point(2.0, 0.0), Point(0.0, 2.0)),
        new Rectangle(Point(0.0, 0.0), Point(5.0, 0.0), 3.0),
        new Carre(Point(1.0, 1.0), Point(1.0, 5.0))
    };

    for (size_t i = 0; i < formes.size(); i++) {
        formes[i]->afficher();
    }

    // Liberation de la memoire (appelle le destructeur virtuel de ObjetGeometrique)
    for (size_t i = 0; i < formes.size(); i++) {
        delete formes[i];
    }

    cout << "\nTous les tests unitaires ont reussi !" << endl;
    return 0;
}
