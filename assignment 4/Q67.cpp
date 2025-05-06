#include <iostream>

class Appliance {
public:
    virtual void functionality() = 0; // Pure virtual function
};

class WashingMachine : public Appliance {
public:
    void functionality() override {
        std::cout << "Washing clothes." << std::endl;
    }
};

class Refrigerator : public Appliance {
public:
    void functionality() override {
        std::cout << "Keeping food cold." << std::endl;
    }
};

class Microwave : public Appliance {
public:
    void functionality() override {
        std::cout << "Heating food." << std::endl;
    }
};

int main() {
    Appliance* appliances[3];
    appliances[0] = new WashingMachine();
    appliances[1] = new Refrigerator();
    appliances[2] = new Microwave();

    for (int i = 0; i < 3; i++) {
        appliances[i]->functionality();
        delete appliances[i];
    }

    return 0;
}
