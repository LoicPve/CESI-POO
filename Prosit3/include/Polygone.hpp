#pragma once
#include <vector>
#include "ObjetGeometrique.hpp"
#include "Point.hpp"

// Classe intermediaire abstraite representant un polygone ferme.
// Elle factorise le stockage des sommets et le calcul generique du perimetre.
class Polygone : public ObjetGeometrique {
private:
    // Encapsulation stricte : les sous-classes accedent aux sommets via le constructeur et le getter
    std::vector<Point> m_sommets;

public:
    Polygone(const std::vector<Point>& sommets);

    const std::vector<Point>& getSommets() const;

    // Le perimetre est commun a tous les polygones fermes (somme des cotes)
    double perimetre() const override;

    // L'aire reste virtuelle pure : chaque sous-classe fournit son calcul dedie
    virtual double aire() const override = 0;
    virtual void afficher() const override = 0;
};
