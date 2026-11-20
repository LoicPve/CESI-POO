#pragma once
#include "Polygone.hpp"

// Classe concrete representant un rectangle.
// Herite de Polygone (et non de Carre) afin de conserver deux dimensions distinctes.
class Rectangle : public Polygone {
private:
    double m_longueur;
    double m_largeur;

    // Methode utilitaire statique pour reconstruire les 4 sommets a partir de 2 sommets et de la largeur
    static std::vector<Point> calculerSommets(const Point& a, const Point& b, double largeur);

public:
    Rectangle(const Point& a, const Point& b, double largeur);

    double getLongueur() const;
    double getLargeur() const;

    double aire() const override;
    void afficher() const override;
};
