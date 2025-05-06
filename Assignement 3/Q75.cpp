#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    friend double calculateArea(const Circle& circle);
};

double calculateArea(const Circle& circle) {
    return M_PI * circle.radius * circle.radius;
}

int main() {
    Circle circle(5.0);
    cout << "Area of the circle: " << calculateArea(circle) << endl;
    return 0;
}
