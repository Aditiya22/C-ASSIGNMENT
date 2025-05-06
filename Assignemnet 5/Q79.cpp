#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    ofstream outFile("binarydata.bin", ios::binary);
    outFile.write(reinterpret_cast<char*>(numbers), sizeof(numbers));
    outFile.close();

    int readNumbers[5] = {0};

    ifstream inFile("binarydata.bin", ios::binary);
    inFile.read(reinterpret_cast<char*>(readNumbers), sizeof(readNumbers));
    inFile.close();

    cout << "Numbers read from binary file:" << endl;
    for (int num : readNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
