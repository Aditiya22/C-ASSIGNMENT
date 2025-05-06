#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int id;
    char name[20];
};

int main() {
    Employee emp1 = {1, "Alice"};
    Employee emp2;

    fstream file("employees.bin", ios::in | ios::out | ios::binary | ios::trunc);
    file.write(reinterpret_cast<char*>(&emp1), sizeof(emp1));

    file.seekg(0);
    file.read(reinterpret_cast<char*>(&emp2), sizeof(emp2));

    cout << "Employee ID: " << emp2.id << ", Name: " << emp2.name << endl;

    file.close();
    return 0;
}
