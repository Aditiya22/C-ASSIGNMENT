#include <iostream>
#include <string>

class Person {
public:
    std::string name;

    Person& setName(const std::string& n) {
        name = n;
        return *this; // Return the current object
    }

    void display() {
        std::cout << "Name: " << name << std::endl;
    }
};

int main() {
    Person person;
    person.setName("Alice").display(); // Chaining member function calls
    return 0;
}
