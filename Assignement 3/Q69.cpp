#include <iostream>
using namespace std;

class Logger {
public:
    Logger() {
        cout << "Logger created." << endl;
    }

    ~Logger() {
        cout << "Logger destroyed." << endl;
    }
};

int main() {
    Logger logger;
    return 0;
}
