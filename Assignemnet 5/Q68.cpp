#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("source.txt");
    ofstream outFile("destination.txt");
    string line;

    if (!inFile) {
        cerr << "Unable to open source.txt" << endl;
        return 1;
    }

    while (getline(inFile, line)) {
        outFile << line << endl;
    }

    inFile.close();
    outFile.close();
    return 0;
}
