#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;

    Student(std::string n, int a) : name(n), age(a) {}
};

int main() {
    Student* student = new Student("John Doe", 20);

    std::cout << "Name: " << student->name << ", Age: " << student->age << std::endl;

    delete student;
    return 0;
}
