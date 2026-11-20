#include <iostream>

using namespace std;

class Fraction {
private:
    int numerateur;
    int denominateur;

public:
    Fraction() : numerateur(1), denominateur(1) {}

    // Constructeur avec paramètres
    Fraction(int numerateur, int denominateur) : numerateur(numerateur), denominateur(denominateur) {}

    // Getters et Setters
    int getNumerateur() const { return numerateur; }
    int getDenominateur() const { return denominateur; }
    void setNumerateur(int num) { numerateur = num; }
    void setDenominateur(int den) { denominateur = den; }

    // Addition : (a/b) + (c/d) = (a*d + c*b) / (b*d)
    Fraction add(const Fraction& f2) const {
        int num = numerateur * f2.denominateur + f2.numerateur * denominateur;
        int den = denominateur * f2.denominateur;
        return Fraction(num, den);
    }

    // Soustraction : (a/b) - (c/d) = (a*d - c*b) / (b*d)
    Fraction minus(const Fraction& f2) const {
        int num = numerateur * f2.denominateur - f2.numerateur * denominateur;
        int den = denominateur * f2.denominateur;
        return Fraction(num, den);
    }

    // Multiplication : (a/b) * (c/d) = (a*c) / (b*d)
    Fraction multiply(const Fraction& f2) const {
        int num = numerateur * f2.numerateur;
        int den = denominateur * f2.denominateur;
        return Fraction(num, den);
    }

    // Division : (a/b) / (c/d) = (a*d) / (b*c)
    Fraction divide(const Fraction& f2) const {
        int num = numerateur * f2.denominateur;
        int den = numerateur * f2.numerateur;
        return Fraction(num, den);
    }

    // Simplification de fraction : 
    Fraction simplify() const {
        int num = numerateur;
        int den = numerateur; 
        
        return Fraction(num,den);
    }
};

int main()
{
    /* Test constructors */
    Fraction f0;
    if (f0.getNumerateur() == 1 && f0.getDenominateur() == 1) {
        cout << "[OK] Default constructor works" << endl;
    }
    else {
        cout << "[FAILURE] Default constructor doesn't work" << endl;
    }

    Fraction f1(1, 2);
    if (f1.getNumerateur() == 1 && f1.getDenominateur() == 2) {
        cout << "[OK] Constructor with parameters works" << endl;
    }
    else {
        cout << "[FAILURE] Constructor with parameters doesn't work" << endl;
    }

    Fraction f2(3, 4);

    /* Test add */ 
    Fraction f3 = f1.add(f2);
    
    if (f3.getNumerateur() == 10 && f3.getDenominateur() == 8) {
        cout << "[OK] Add method works" << endl;
    }
    else {
        cout << "[FAILURE] Add method doesn't work" << endl;
    }

    /* Test minus */
    f3 = f1.minus(f2);
    if (f3.getNumerateur() == -2 && f3.getDenominateur() == 8) {
        cout << "[OK] Minus method works" << endl;
    }
    else {
        cout << "[FAILURE] Minus method doesn't work" << endl;
    }

    /* Test multiply */
    f3 = f1.multiply(f2);
    if (f3.getNumerateur() == 3 && f3.getDenominateur() == 8) {
        cout << "[OK] Multiply method works" << endl;
    }
    else {
        cout << "[FAILURE] Multiply method doesn't work" << endl;
    }

    /* Test divide */
    f3 = f1.divide(f2);
    if (f3.getNumerateur() == 4 && f3.getDenominateur() == 6) {
        cout << "[OK] Divide method works" << endl;
    }
    else {
        cout << "[FAILURE] Divide method doesn't work" << endl;
    }
    return 0;
}