#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("merged.txt");
    string filename;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter the name of file " << i << ": ";
        cin >> filename;
        ifstream inFile(filename);
        if (inFile) {
            outFile << inFile.rdbuf();
            inFile.close();
        } else {
            cout << "Error opening file: " << filename << endl;
        }
    }

    outFile.close();
    return 0;
}
