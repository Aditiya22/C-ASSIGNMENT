#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("textfile.txt");
    string word, line;
    int count = 0;

    cout << "Enter the word to search for: ";
    cin >> word;

    while (getline(inFile, line)) {
        size_t pos = line.find(word);
        while (pos != string::npos) {
            count++;
            pos = line.find(word, pos + word.length());
        }
    }

    inFile.close();
    cout << "The word '" << word << "' occurred " << count << " times." << endl;
    return 0;
}
