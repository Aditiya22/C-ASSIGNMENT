#include <iostream>

class Sample {
public:
    void display() {
        std::cout << "Displaying from Sample class." << std::endl;
    }

    void callDisplay() {
        Sample* ptr = this; 
        ptr->display();
    }
};

int main() {
    Sample obj;
    obj.callDisplay();
    return 0;
}
