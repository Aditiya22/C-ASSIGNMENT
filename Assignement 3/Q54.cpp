Create a class 
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    void setName(const std::string& n) {
        name = n;
    }

    std::string getName() const {
        return name;
    }

    void setAge(int a) {
        age = a;
    }

    int getAge() const {
        return age;
    }
};
