#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

int main() {
    ifstream file("data.txt");
    try {
        if (!file.is_open()) throw runtime_error("File could not be opened");
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
