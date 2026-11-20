#pragma once
#include "Point.hpp"

// Classe representant un vecteur 2D pour gerer les directions et deplacements
class Vecteur {
private:
    double m_dx;
    double m_dy;

public:
    // Constructeur a partir des composantes (dx, dy)
    Vecteur(double dx = 0.0, double dy = 0.0);

    // Constructeur a partir de deux points (vecteur AB)
    Vecteur(const Point& a, const Point& b);

    double getDx() const;
    double getDy() const;

    // Retourne la longueur (norme) du vecteur
    double norme() const;

    // Retourne le vecteur unitaire de meme direction (norme = 1)
    Vecteur normaliser() const;

    // Retourne un vecteur perpendiculaire (rotation de 90 degres dans le sens direct)
    Vecteur orthogonal() const;

    // Applique ce vecteur a un point pour obtenir sa nouvelle position
    Point deplacer(const Point& p) const;

    // Multiplie le vecteur par un scalaire (permet d'ajuster sa longueur)
    Vecteur operator*(double k) const;
};
