#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("results.txt");
    string input;

    cout << "Enter some text (type 'exit' to stop):" << endl;
    while (true) {
        getline(cin, input);
        if (input == "exit") {
            break;
        }
        outFile << "Processed: " << input << endl;
    }

    outFile.close();
    return 0;
}
