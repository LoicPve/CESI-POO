#include "Polygone.hpp"

using namespace std;

Polygone::Polygone(const vector<Point>& sommets) : m_sommets(sommets) {}

const vector<Point>& Polygone::getSommets() const {
    return m_sommets;
}

double Polygone::perimetre() const {
    if (m_sommets.size() < 2) {
        return 0.0;
    }

    double total = 0.0;
    size_t n = m_sommets.size();

    // On additionne la distance entre chaque sommet et le suivant,
    // le modulo n permet de refermer le polygone entre le dernier et le premier sommet
    for (size_t i = 0; i < n; i++) {
        total += m_sommets[i].distanceTo(m_sommets[(i + 1) % n]);
    }

    return total;
}
