#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
public:
    void display() {
        show();
    }
};

int main() {
    D obj;
    obj.display();
    return 0;
}
