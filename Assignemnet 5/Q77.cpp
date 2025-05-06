#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");
    if (!outFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    outFile << "Hello, World!" << endl;
    cout << "Current put pointer position: " << outFile.tellp() << endl;

    outFile.seekp(0, ios::beg);
    outFile << "New Start" << endl;

    outFile.close();
    return 0;
}
