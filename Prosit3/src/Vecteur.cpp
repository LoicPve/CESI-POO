#include "Vecteur.hpp"
#include <cmath>

using namespace std;

Vecteur::Vecteur(double dx, double dy) : m_dx(dx), m_dy(dy) {}

Vecteur::Vecteur(const Point& a, const Point& b)
    : m_dx(b.getX() - a.getX()), m_dy(b.getY() - a.getY()) {}

double Vecteur::getDx() const {
    return m_dx;
}

double Vecteur::getDy() const {
    return m_dy;
}

double Vecteur::norme() const {
    return sqrt(m_dx * m_dx + m_dy * m_dy);
}

Vecteur Vecteur::normaliser() const {
    double n = norme();
    // Securite pour eviter une division par zero si les deux points sont confondus
    if (n == 0.0) {
        return Vecteur(0.0, 0.0);
    }
    return Vecteur(m_dx / n, m_dy / n);
}

Vecteur Vecteur::orthogonal() const {
    // Rotation de 90 degres dans le plan 2D : (dx, dy) -> (-dy, dx)
    return Vecteur(-m_dy, m_dx);
}

Point Vecteur::deplacer(const Point& p) const {
    return Point(p.getX() + m_dx, p.getY() + m_dy);
}

Vecteur Vecteur::operator*(double k) const {
    return Vecteur(m_dx * k, m_dy * k);
}
