#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream file("example.txt", ios::in | ios::out | ios::trunc);
    string input;

    cout << "Enter text to write to the file:" << endl;
    getline(cin, input);
    file << input << endl;

    file.seekg(0); 
    cout << "Contents of the file:" << endl;
    while (getline(file, input)) {
        cout << input << endl;
    }

    file.close();
    return 0;
}
