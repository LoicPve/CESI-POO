#pragma once
#include "Polygone.hpp"

// Classe concrete representant un carre.
// Herite directement de Polygone (et non de Rectangle) pour eviter un attribut superflu (L = l)
// et preserver la coherence semantique.
class Carre : public Polygone {
private:
    double m_cote;

    // Reconstruit les 4 sommets du carre a partir d'un premier cote [AB]
    static std::vector<Point> calculerSommets(const Point& a, const Point& b);

public:
    Carre(const Point& a, const Point& b);

    double getCote() const;

    double aire() const override;
    void afficher() const override;
};
