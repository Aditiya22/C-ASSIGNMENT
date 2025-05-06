#include <iostream>
#include <string>

class Person {
public:
    std::string name;

    Person& setName(const std::string& n) {
        name = n;
        return *this; 
    }

    void display() {
        std::cout << "Name: " << name << std::endl;
    }
};

int main() {
    Person person;
    person.setName("Alice").display(); 
    return 0;
}
