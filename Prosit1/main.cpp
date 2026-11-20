#include <iostream> // Inclus iostream pour les affichages avec std::cout
#include <cassert>  // Inclus cassert pour utiliser assert() lors des tests
#include <cmath>    // Inclus cmath pour std::abs
#include "Point2.hpp"   // Inclus notre classe Point2
#include "Vector2.hpp"  // Inclus notre classe Vector2
#include "Segment2.hpp" // Inclus notre classe Segment2

// Fonction utilitaire pour comparer deux nombres flottants avec une tolerance
bool isEqual(double a, double b, double epsilon = 1e-5) {
    return std::abs(a - b) < epsilon; // Retourne vrai si la difference est minime
}

// Fonction regroupant tous les tests unitaires
void runTests() {
    // --- 1. Test de Point2 et du calcul de distance ---
    Point2 p1(0.0, 0.0); // Cree le point p1 en (0,0)
    Point2 p2(3.0, 4.0); // Cree le point p2 en (3,4)
    assert(isEqual(p1.distanceTo(p2), 5.0)); // Verifie que la distance vaut 5 (triangle 3-4-5)

    // --- 2. Test de Vector2 et du calcul de norme ---
    Vector2 v1(3.0, 4.0); // Cree le vecteur v1(3,4)
    assert(isEqual(v1.length(), 5.0)); // Verifie que la longueur du vecteur vaut 5

    // --- 3. Test de la translation d'un point par un vecteur ---
    Point2 p3 = p1.translate(v1); // Deplace p1 de (0,0) avec le vecteur (3,4)
    assert(isEqual(p3.getX(), 3.0)); // Verifie que le nouveau X vaut 3.0
    assert(isEqual(p3.getY(), 4.0)); // Verifie que le nouveau Y vaut 4.0

    // --- 4. Test de la classe Segment2 ---
    Segment2 seg(p1, p2); // Cree un segment reliant p1(0,0) et p2(3,4)
    assert(isEqual(seg.length(), 5.0)); // Verifie que la longueur du segment vaut 5.0
    
    // --- 5. Test de la conversion du segment en vecteur ---
    Vector2 segVec = seg.toVector(); // Convertit le segment en vecteur
    assert(isEqual(segVec.getDx(), 3.0)); // Verifie la composante X du vecteur
    assert(isEqual(segVec.getDy(), 4.0)); // Verifie la composante Y du vecteur

    // Message de confirmation si tous les assert sont passes
    std::cout << "[OK] Tous les tests unitaires ont reussi avec succes !" << std::endl;
}

// Point d'entree principal du programme
int main() {
    // Affiche le titre de l'execution
    std::cout << "--- Prosit 1 : Validation POO C++ ---" << std::endl;
    
    // LANCE les tests unitaires
    runTests();
    
    // Fin normale du programme (retourne 0)
    return 0;
}