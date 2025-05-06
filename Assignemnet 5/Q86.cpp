#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Employee {
    int id;
    char name[20];
};

int main() {
    fstream file("employees.bin", ios::in | ios::binary);
    vector<Employee> employees;

    Employee emp;
    while (file.read(reinterpret_cast<char*>(&emp), sizeof(emp))) {
        employees.push_back(emp);
    }

    for (int i = employees.size() - 1; i >= 0; --i) {
        cout << "Employee ID: " << employees[i].id << ", Name: " << employees[i].name << endl;
    }

    file.close();
    return 0;
}
