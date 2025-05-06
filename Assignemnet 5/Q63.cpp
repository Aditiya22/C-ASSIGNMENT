#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double number = 123.456789;

    cout << fixed << setprecision(2) << "Precision 2: " << number << endl;
    cout << fixed << setprecision(4) << "Precision 4: " << number << endl;
    cout << fixed << setprecision(6) << "Precision 6: " << number << endl;

    return 0;
}
