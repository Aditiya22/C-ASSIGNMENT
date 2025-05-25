//Q41.Write overloaded functions to calculate the area of a circle, rectangle, and triangle.
#include <iostream>
using namespace std;

const double PI = 3.14159;

double area(double radius) {
    return PI * radius * radius;
}

double area(double length, double width) {
    return length * width;
}

double area(double base, double height, int) {
    return 0.5 * base * height;
}

int main() {
    cout << area(5.0) << endl;
    cout << area(4.0, 6.0) << endl;
    cout << area(3.0, 7.0, 0) << endl;
    return 0;
}
