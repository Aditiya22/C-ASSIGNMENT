#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void encrypt(const string& inputFile, const string& outputFile, int shift) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);
    char ch;

    while (inFile.get(ch)) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            ch = (ch - base + shift) % 26 + base;
        }
        outFile.put(ch);
    }

    inFile.close();
    outFile.close();
}

void decrypt(const string& inputFile, const string& outputFile, int shift) {
    encrypt(inputFile, outputFile, 26 - shift);
}

int main() {
    string inputFile = "plaintext.txt";
    string encryptedFile = "encrypted.txt";
    string decryptedFile = "decrypted.txt";
    int shift = 3;

    encrypt(inputFile, encryptedFile, shift);
    cout << "File encrypted." << endl;

    decrypt(encryptedFile, decryptedFile, shift);
    cout << "File decrypted." << endl;

    return 0;
}
