#include <iostream>
#include <stdexcept>
using namespace std;

class Resource {
public:
    Resource() {
        cout << "Resource acquired" << endl;
    }
    ~Resource() {
        cout << "Resource released" << endl;
    }
};

int main() {
    Resource res;
    try {
        throw runtime_error("An error occurred");
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
    
    return 0;
}
