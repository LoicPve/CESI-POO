#pragma once
#include "ObjetGeometrique.hpp"
#include "Point.hpp"

// Classe concrete representant un cercle defini par son centre et son rayon
class Cercle : public ObjetGeometrique {
private:
    Point m_centre;
    double m_rayon;

public:
    Cercle(const Point& centre, double rayon);

    Point getCentre() const;
    double getRayon() const;
    void setCentre(const Point& centre);
    void setRayon(double rayon);

    double aire() const override;
    double perimetre() const override;
    void afficher() const override;
};
