#pragma once

// Classe mere abstraite definissant le contrat commun a toutes les formes geometriques
class ObjetGeometrique {
public:
    // Destructeur virtuel indispensable pour liberer correctement les sous-classes via un pointeur de base
    virtual ~ObjetGeometrique() = default;

    // Methodes virtuelles pures : chaque forme concrete devra fournir sa propre implementation
    virtual double aire() const = 0;
    virtual double perimetre() const = 0;
    virtual void afficher() const = 0;
};
