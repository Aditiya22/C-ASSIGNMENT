#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");
    if (!outFile) {
        cerr << "Error creating file." << endl;
        return 1;
    }

    outFile << "This is a test file." << endl;
    outFile.close();

    ifstream inFile("example.txt");
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
