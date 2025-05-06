#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const char str[] = "Hello\nWorld\n";

    ofstream textFile("textmode.txt");
    textFile.write(str, sizeof(str) - 1);
    textFile.close();

    ofstream binaryFile("binnarymode.bin", ios::binary);
    binaryFile.write(str, sizeof(str) - 1);
    binaryFile.close();

    cout << "Files created: textmode.txt (text mode), binnarymode.bin (binary mode)" << endl;
    cout << "Compare file sizes and contents for differences." << endl;

    return 0;
}
