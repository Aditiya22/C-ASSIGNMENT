#include <iostream>

class Vehicle {
public:
    virtual void display() = 0; // Pure virtual function
};

class Car : public Vehicle {
public:
    void display() override {
        std::cout << "This is a Car." << std::endl;
    }
};

class Bike : public Vehicle {
public:
    void display() override {
        std::cout << "This is a Bike." << std::endl;
    }
};

int main() {
    Vehicle* vehicles[2];
    vehicles[0] = new Car();
    vehicles[1] = new Bike();

    for (int i = 0; i < 2; i++) {
        vehicles[i]->display();
        delete vehicles[i];
    }

    return 0;
}
