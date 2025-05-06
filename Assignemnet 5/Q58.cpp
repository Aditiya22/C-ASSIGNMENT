#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("strings.txt");
    string str;

    cout << "Enter strings to write to the file (type 'exit' to stop):" << endl;
    while (true) {
        getline(cin, str);
        if (str == "exit") {
            break;
        }
        outFile << str << endl;
    }

    outFile.close();
    return 0;
}
