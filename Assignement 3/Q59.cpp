59.
#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Setter methods (optional, but useful to set values after object creation)
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    // Getter methods (optional, if you want to access the values)
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    // Method to calculate area
    double area() const {
        return length * width;
    }

    // Method to calculate perimeter
    double perimeter() const {
        return 2 * (length + width);
    }
};

// Example usage
int main() {
    Rectangle rect(5.0, 3.0);

    std::cout << "Length: " << rect.getLength() << std::endl;
    std::cout << "Width: " << rect.getWidth() << std::endl;
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;

    return 0;
}
