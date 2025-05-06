#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("truncate.txt");
    file << "This is the original content.\n";
    file.close();

    ofstream truncFile("truncate.txt", ios::trunc);
    truncFile << "New content after truncation.\n";
    truncFile.close();

    ifstream inFile("truncate.txt");
    string line;
    cout << "File content after opening with truncation mode:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
