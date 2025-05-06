#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("numbers.txt");
    int number;

    if (!inFile) {
        cerr << "Unable to open file numbers.txt" << endl;
        return 1;
    }

    cout << "Numbers in the file:" << endl;

    while (inFile >> number) {
        cout << number << " ";
    }

    cout << endl;

    inFile.close();
    return 0;
}
