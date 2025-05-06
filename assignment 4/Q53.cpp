#include <iostream>

class Employee {
public:
    virtual void work() {
        std::cout << "Employee is working." << std::endl;
    }
};

class Manager : public Employee {
public:
    void work() override {
        std::cout << "Manager is managing." << std::endl;
    }
};

class Worker : public Employee {
public:
    void work() override {
        std::cout << "Worker is working." << std::endl;
    }
};

int main() {
    Employee* employees[2];
    employees[0] = new Manager();
    employees[1] = new Worker();

    for (int i = 0; i < 2; i++) {
        employees[i]->work();
        delete employees[i];
    }

    return 0;
}
