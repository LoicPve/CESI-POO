#pragma once

// Classe representant un point en 2 dimensions (x, y)
class Point {
private:
    double m_x;
    double m_y;

public:
    // Constructeur avec valeurs par defaut a l'origine (0, 0)
    Point(double x = 0.0, double y = 0.0);

    // Accesseurs en lecture et ecriture
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    // Calcule la distance euclidienne vers un autre point
    double distanceTo(const Point& other) const;

    // Affiche les coordonnees du point dans la console
    void afficher() const;
};
