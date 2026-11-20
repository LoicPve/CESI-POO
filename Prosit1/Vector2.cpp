#include "Vector2.hpp" // Inclus le fichier d'en-tete de Vector2
#include <cmath>       // Inclus cmath pour utiliser std::sqrt

// Constructeur par defaut (composantes initialisees a 0.0)
Vector2::Vector2() : m_dx(0.0), m_dy(0.0) {}

// Constructeur parametre avec valeurs initiales
Vector2::Vector2(double dx, double dy) : m_dx(dx), m_dy(dy) {}

// Retourne la valeur de m_dx
double Vector2::getDx() const { return m_dx; }

// Retourne la valeur de m_dy
double Vector2::getDy() const { return m_dy; }

// Modifie la valeur de m_dx
void Vector2::setDx(double dx) { m_dx = dx; }

// Modifie la valeur de m_dy
void Vector2::setDy(double dy) { m_dy = dy; }

// Calcule la norme du vecteur : ||v|| = sqrt(dx^2 + dy^2)
double Vector2::length() const {
    return std::sqrt(m_dx * m_dx + m_dy * m_dy); // Formule classique de la norme
}