#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {}

    friend ostream& operator<<(ostream& os, const Fraction& frac) {
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }

    friend istream& operator>>(istream& is, Fraction& frac) {
        char slash;
        is >> frac.numerator >> slash >> frac.denominator;
        return is;
    }
};

int main() {
    Fraction frac;
    cout << "Enter a fraction (numerator/denominator): ";
    cin >> frac;
    cout << "You entered: " << frac << endl;
    return 0;
}
