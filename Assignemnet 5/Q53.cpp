#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    double salary;
    string name;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your salary: ";
    cin >> salary;

    cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    return 0;
}
