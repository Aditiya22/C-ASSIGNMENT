#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    Car(std::string m, std::string mod, int y) : make(m), model(mod), year(y) {}

    void display() {
        std::cout << make << " " << model << " " << year << std::endl;
    }
};

int main() {
    Car cars[] = {
        Car("Toyota", "Camry", 2020),
        Car("Honda", "Civic", 2019),
        Car("Ford", "Mustang", 2021)
    };

    for (const auto& car : cars) {
        car.display();
    }

    return 0;
}
