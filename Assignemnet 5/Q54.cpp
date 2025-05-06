#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double pi = 3.14159265358979323846;

    cout << fixed << setprecision(2);
    cout << "Formatted output of pi: " << pi << endl;

    cout << setw(10) << "Number" << setw(10) << "Square" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << setw(10) << i << setw(10) << i * i << endl;
    }

    return 0;
}
