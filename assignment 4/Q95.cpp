#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function called." << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function called." << endl;
    }
};

void display(Base* b) {
    b->show(); 
}

int main() {
    Base* b = new Base();
    Derived* d = new Derived();

    display(b); 
    display(d);
    delete b;
    delete d;
    return 0;
}
