#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary = 12345.678;
    double percentage = 0.1234;

    cout << fixed << setprecision(2);
    cout << "Salary: $" << salary << endl;
    cout << "Percentage: " << percentage * 100 << "%" << endl;

    return 0;
}
