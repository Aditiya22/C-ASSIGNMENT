#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    try {
        if (b == 0) throw runtime_error("Division by zero");
        cout << "Result: " << a / b << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
