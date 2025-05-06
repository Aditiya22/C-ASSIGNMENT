#include <iostream>
#include <string>

class Media {
public:
    virtual void display() = 0; 
};

class Book : public Media {
private:
    std::string title;
public:
    Book(std::string t) : title(t) {}
    void display() override {
        std::cout << "Book: " << title << std::endl;
    }
};

class DVD : public Media {
private:
    std::string title;
public:
    DVD(std::string t) : title(t) {}
    void display() override {
        std::cout << "DVD: " << title << std::endl;
    }
};

int main() {
    Media* media[2];
    media[0] = new Book("The Great Gatsby");
    media[1] = new DVD("Inception");

    for (int i = 0; i < 2; i++) {
        media[i]->display();
        delete media[i];
    }

    return 0;
}
