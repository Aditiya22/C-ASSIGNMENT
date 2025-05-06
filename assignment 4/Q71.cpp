#include <iostream>
using namespace std;

class Device {
public:
    virtual void turnOn() = 0;
};

class Laptop : public Device {
public:
    void turnOn() {
        cout << "Laptop is turned on" << endl;
    }
};

class Smartphone : public Device {
public:
    void turnOn() {
        cout << "Smartphone is turned on" << endl;
    }
};

int main() {
    Device* device1 = new Laptop();
    Device* device2 = new Smartphone();
    device1->turnOn();
    device2->turnOn();
    delete device1;
    delete device2;
    return 0;
}
