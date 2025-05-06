#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("append.txt", ios::app);
    string input;

    cout << "Enter text to append to the file (type 'exit' to stop):" << endl;
    while (true) {
        getline(cin, input);
        if (input == "exit") {
            break;
        }
        outFile << input << endl;
    }

    outFile.close();
    return 0;
}
