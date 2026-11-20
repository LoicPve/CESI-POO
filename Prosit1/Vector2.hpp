#ifndef VECTOR2_HPP
#define VECTOR2_HPP

// Definition de la classe Vector2
class Vector2 {
private:
    double m_dx; // Composante X du vecteur (privee)
    double m_dy; // Composante Y du vecteur (privee)

public:
    // Constructeur par defaut : initialise le vecteur a (0,0)
    Vector2();

    // Constructeur parametre : initialise le vecteur a (dx, dy)
    Vector2(double dx, double dy);

    // Getter pour obtenir la composante X (dx)
    double getDx() const;

    // Getter pour obtenir la composante Y (dy)
    double getDy() const;

    // Setter pour modifier la composante X (dx)
    void setDx(double dx);

    // Setter pour modifier la composante Y (dy)
    void setDy(double dy);

    // Calcule et retourne la norme (longueur) du vecteur
    double length() const;
};

#endif