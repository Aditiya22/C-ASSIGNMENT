
#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    double price;

public:
    Book(const std::string& t, const std::string& a, double p) : title(t), author(a), price(p) {}

    void display() const {
        std::cout << "Title: " << title << ", Author: " << author << ", Price: $" << price << std::endl;
    }
};

int main() {
    Book book("1984", "George Orwell", 9.99);
    book.display();
    return 0;
}
