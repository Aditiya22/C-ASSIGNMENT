#include <iostream>
#include <fstream>
using namespace std;

struct Person {
    char name[20];
    int age;
};

int main() {
    Person p1 = {"Alice", 30};
    Person p2;

    ofstream outFile("person.bin", ios::binary);
    outFile.write(reinterpret_cast<char*>(&p1), sizeof(p1));
    outFile.close();

    ifstream inFile("person.bin", ios::binary);
    inFile.read(reinterpret_cast<char*>(&p2), sizeof(p2));
    inFile.close();

    cout << "Read Person: " << p2.name << ", Age: " << p2.age << endl;

    return 0;
}
