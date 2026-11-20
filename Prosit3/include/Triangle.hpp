#pragma once
#include "Polygone.hpp"

// Classe concrete representant un triangle defini par ses trois sommets
class Triangle : public Polygone {
public:
    Triangle(const Point& a, const Point& b, const Point& c);

    double aire() const override;
    void afficher() const override;
};
