#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter integers to sum (type -1 to stop):" << endl;

    while (true) {
        cin >> number;
        if (number == -1) {
            break;
        }
        sum += number;
    }

    cout << "The sum is: " << sum << endl;
    return 0;
}
