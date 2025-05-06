#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("data.bin", ios::binary);
    int numbers[] = {1, 2, 3, 4, 5};

    if (!outFile) {
        cerr << "Unable to open file data.bin" << endl;
        return 1;
    }

    outFile.write(reinterpret_cast<char*>(numbers), sizeof(numbers));
    outFile.close();
    return 0;
}
