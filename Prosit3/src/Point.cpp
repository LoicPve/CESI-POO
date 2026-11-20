#include "Point.hpp"
#include <cmath>
#include <iostream>

using namespace std;

Point::Point(double x, double y) : m_x(x), m_y(y) {}

double Point::getX() const {
    return m_x;
}

double Point::getY() const {
    return m_y;
}

void Point::setX(double x) {
    m_x = x;
}

void Point::setY(double y) {
    m_y = y;
}

double Point::distanceTo(const Point& other) const {
    // Calcul des ecarts sur chaque axe puis application du theoreme de Pythagore
    double dx = other.m_x - m_x;
    double dy = other.m_y - m_y;
    return sqrt(dx * dx + dy * dy);
}

void Point::afficher() const {
    cout << "(" << m_x << ", " << m_y << ")";
}
