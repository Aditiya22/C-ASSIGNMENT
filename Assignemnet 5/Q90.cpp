#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("editor.txt");
    string line;

    cout << "Simple Text Editor (type 'exit' to save and quit):" << endl;
    while (true) {
        getline(cin, line);
        if (line == "exit") {
            break;
        }
        outFile << line << endl;
    }

    outFile.close();
    return 0;
}
