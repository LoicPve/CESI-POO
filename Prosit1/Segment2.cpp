#include "Segment2.hpp" // Inclus l'en-tete de la classe Segment2

// Constructeur par defaut (initialise start et end a (0,0))
Segment2::Segment2() : m_start(Point2()), m_end(Point2()) {}

// Constructeur parametre (affecte les points transmis)
Segment2::Segment2(const Point2& start, const Point2& end) 
    : m_start(start), m_end(end) {}

// Retourne une copie du point de depart
Point2 Segment2::getStart() const { return m_start; }

// Retourne une copie du point d'arrivee
Point2 Segment2::getEnd() const { return m_end; }

// Modifie le point de depart
void Segment2::setStart(const Point2& start) { m_start = start; }

// Modifie le point d'arrivee
void Segment2::setEnd(const Point2& end) { m_end = end; }

// Calcule la longueur du segment via la distance entre le point de depart et d'arrivee
double Segment2::length() const {
    return m_start.distanceTo(m_end); // Delègue le calcul a la methode de Point2
}

// Convertit le segment en vecteur (dx = x_fin - x_debut, dy = y_fin - y_debut)
Vector2 Segment2::toVector() const {
    return Vector2(m_end.getX() - m_start.getX(), m_end.getY() - m_start.getY());
}