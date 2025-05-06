#include <iostream>
using namespace std;

int main() {
    try {
        throw 20;
    } catch (int e) {
        cout << "Caught integer: " << e << endl;
    } catch (const char* e) {
        cout << "Caught string: " << e << endl;
    }
    return 0;
} 
