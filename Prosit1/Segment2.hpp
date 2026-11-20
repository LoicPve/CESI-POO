#ifndef SEGMENT2_HPP
#define SEGMENT2_HPP

#include "Point2.hpp"  // Inclus la classe Point2 car le segment contient des points
#include "Vector2.hpp" // Inclus la classe Vector2 pour transformer le segment en vecteur

// enumeration des etats d'intersection possibles entre deux segments
enum class IntersectionStatus {
    POINT,                     // Intersection en un point unique
    COLINEAR_INTERSECTING,     // Segments colineaires qui se chevauchent
    COLINEAR_NON_INTERSECTING, // Segments colineaires sans chevauchement
    PARALLEL_NON_INTERSECTING, // Segments paralleles disjoints
    NON_INTERSECTING           // Segments non paralleles qui ne se touchent pas
};

// Definition de la classe Segment2
class Segment2 {
private:
    Point2 m_start; // Point de depart du segment (prive)
    Point2 m_end;   // Point d'arrivee du segment (prive)

public:
    // Constructeur par defaut
    Segment2();

    // Constructeur parametre prenant le point de depart et le point d'arrivee
    Segment2(const Point2& start, const Point2& end);

    // Getter pour obtenir le point de depart
    Point2 getStart() const;

    // Getter pour obtenir le point d'arrivee
    Point2 getEnd() const;

    // Setter pour modifier le point de depart
    void setStart(const Point2& start);

    // Setter pour modifier le point d'arrivee
    void setEnd(const Point2& end);

    // Calcule la longueur totale du segment
    double length() const;

    // Convertit le segment en un objet Vector2
    Vector2 toVector() const;
};

#endif