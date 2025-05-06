#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("user_input.txt");
    string input;

    cout << "Enter text to write to the file (type 'exit' to stop):" << endl;
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
