#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() = 0;
    virtual void displayDetails() = 0;
};

class Manager : public Employee {
public:
    void calculateSalary() {
        cout << "Manager Salary Calculated" << endl;
    }
    void displayDetails() {
        cout << "Manager Details" << endl;
    }
};

class Engineer : public Employee {
public:
    void calculateSalary() {
        cout << "Engineer Salary Calculated" << endl;
    }
    void displayDetails() {
        cout << "Engineer Details" << endl;
    }
};

int main() {
    Employee* emp1 = new Manager();
    Employee* emp2 = new Engineer();
    emp1->calculateSalary();
    emp1->displayDetails();
    emp2->calculateSalary();
    emp2->displayDetails();
    delete emp1;
    delete emp2;
    return 0;
}
