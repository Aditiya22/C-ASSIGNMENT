#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter characters (type '#' to stop):" << endl;
    while (true) {
        ch = cin.get();
        if (ch == '#') {
            break;
        }
        cout.put(ch);
    }

    cout << endl;
    return 0;
}
