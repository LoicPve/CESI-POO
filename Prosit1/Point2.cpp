#include "Point2.hpp" // Inclus la definition de la classe Point2
#include "Vector2.hpp" // Inclus la definition de Vector2 pour l'utiliser dans translate
#include <cmath>       // Inclus la bibliotheque mathematique pour std::sqrt (racine carree)

// Implementation du constructeur par defaut (met m_x et m_y a 0.0)
Point2::Point2() : m_x(0.0), m_y(0.0) {}

// Implementation du constructeur parametre
Point2::Point2(double x, double y) : m_x(x), m_y(y) {}

// Retourne la coordonnee X
double Point2::getX() const { return m_x; }

// Retourne la coordonnee Y
double Point2::getY() const { return m_y; }

// Modifie la coordonnee X
void Point2::setX(double x) { m_x = x; }

// Modifie la coordonnee Y
void Point2::setY(double y) { m_y = y; }

// Calcule la distance euclidienne d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
double Point2::distanceTo(const Point2& other) const {
    double dx = other.m_x - m_x; // Calcul de la difference en X
    double dy = other.m_y - m_y; // Calcul de la difference en Y
    return std::sqrt(dx * dx + dy * dy); // Application du theoreme de Pythagore
}

// Applique une translation au point en lui ajoutant un vecteur
Point2 Point2::translate(const Vector2& vec) const {
    // Cree et retourne un nouveau Point2 avec les nouvelles coordonnees
    return Point2(m_x + vec.getDx(), m_y + vec.getDy());
}