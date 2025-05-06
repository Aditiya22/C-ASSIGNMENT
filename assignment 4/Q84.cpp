#include <iostream>
#include <memory>
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
    {
        unique_ptr<Resource> res = make_unique<Resource>();
        
    }
    return 0;
}
