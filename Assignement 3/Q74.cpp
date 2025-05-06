#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;
public:
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    friend double calculateVolume(const Box& box);
};

double calculateVolume(const Box& box) {
    return box.length * box.width * box.height;
}

int main() {
    Box box1(3.0, 4.0, 5.0);
    Box box2(2.0, 3.0, 6.0);
    cout << "Volume of Box 1: " << calculateVolume(box1) << endl;
    cout << "Volume of Box 2: " << calculateVolume(box2) << endl;
    return 0;
}
