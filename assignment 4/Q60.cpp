#include <iostream>

class Box {
public:
    int length;

    Box(int l) : length(l) {}

    Box* getThis() {
        return this; 
    }
};

int main() {
    Box box(10);
    Box* boxPtr = box.getThis();
    std::cout << "Length of box: " << boxPtr->length << std::endl;
    return 0;
}
