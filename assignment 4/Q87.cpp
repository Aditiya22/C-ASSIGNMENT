#include <iostream>
#include <vector>
using namespace std;

class Polynomial {
    vector<int> coeffs; 
public:
    Polynomial(int degree) : coeffs(degree + 1, 0) {}

    void setCoefficient(int degree, int coeff) {
        coeffs[degree] = coeff;
    }

    Polynomial operator+(const Polynomial& other) {
        Polynomial result(coeffs.size() - 1);
        for (size_t i = 0; i < coeffs.size(); i++) {
            result.setCoefficient(i, coeffs[i] + other.coeffs[i]);
        }
        return result;
    }

    Polynomial operator*(const Polynomial& other) {
        Polynomial result(coeffs.size() + other.coeffs.size() - 2);
        for (size_t i = 0; i < coeffs.size(); i++) {
            for (size_t j = 0; j < other.coeffs.size(); j++) {
                result.setCoefficient(i + j, result.coeffs[i + j] + coeffs[i] * other.coeffs[j]);
            }
        }
        return result;
    }

    void display() {
        for (int i = coeffs.size() - 1; i >= 0; i--) {
            cout << coeffs[i] << "x^" << i;
            if (i != 0) cout << " + ";
        }
        cout << endl;
    }
};

int main() {
    Polynomial p1(2); 
    p1.setCoefficient(2, 3); 
	    p1.setCoefficient(1, 2); 
    p1.setCoefficient(0, 1); 

    Polynomial p2(1); 
    p2.setCoefficient(1, 1); 
    p2.setCoefficient(0, 4); 

    Polynomial sum = p1 + p2;
    Polynomial product = p1 * p2;

    cout << "Polynomial 1: ";
    p1.display();
    cout << "Polynomial 2: ";
    p2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Product: ";
    product.display();

    return 0;
}
