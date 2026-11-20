#ifndef POINT2_HPP
#define POINT2_HPP

// Declaration anticipee (forward declaration) pour indiquer que Vector2 existe
class Vector2;

// Definition de la classe Point2
class Point2 {
private:
    double m_x; // Coordonnee X du point (privee)
    double m_y; // Coordonnee Y du point (privee)

public:
    // Constructeur par defaut : initialise le point a (0,0)
    Point2();

    // Constructeur avec parametres : initialise le point a (x, y)
    Point2(double x, double y);

    // Getter pour obtenir la valeur de X
    double getX() const;

    // Getter pour obtenir la valeur de Y
    double getY() const;

    // Setter pour modifier la valeur de X
    void setX(double x);

    // Setter pour modifier la valeur de Y
    void setY(double y);

    // Calcule la distance entre ce point et un autre point
    double distanceTo(const Point2& other) const;

    // Deplace le point selon un vecteur et renvoie le nouveau point
    Point2 translate(const Vector2& vec) const;
};

#endif