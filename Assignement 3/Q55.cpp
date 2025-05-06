#include <string>
#include "Person.cpp"

class Student : public Person {
private:
    std::string studentID;

public:
    void setStudentID(const std::string& id) {
        studentID = id;
    }

    std::string getStudentID() const {
        return studentID;
    }
};
