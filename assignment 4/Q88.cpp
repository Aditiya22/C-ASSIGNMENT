#include <iostream>
using namespace std;

void callbackFunction(int x) {
    cout << "Callback called with value: " << x << endl;
}

void executeCallback(void (*callback)(int), int value) {
    callback(value);
}

int main() {
    executeCallback(callbackFunction, 42);
    return 0;
}
