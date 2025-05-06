#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public runtime_error {
public:
    InvalidAgeException() : runtime_error("Invalid Age: Age cannot be negative") {}
};

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    try {
        if (age < 0) throw InvalidAgeException();
        cout << "Valid age: " << age << endl;
    } catch (const InvalidAgeException& e) {
        cout << e.what() << endl;
    }
    return 0;
}
