#include <iostream>
#include <string>

class Book {
public:
    std::string title;
    std::string author;

    Book(std::string t, std::string a) : title(t), author(a) {}
};

int main() {
    int n;
    std::cout << "Enter the number of books: ";
    std::cin >> n;

    Book* books = new Book[n]{
        {"The Great Gatsby", "F. Scott Fitzgerald"},
        {"1984", "George Orwell"},
        {"To Kill a Mockingbird", "Harper Lee"},
        {"The Catcher in the Rye", "J.D. Salinger"},
        {"Moby Dick", "Herman Melville"}
    };

    for (int i = 0; i < n; i++) {
        std::cout << "Book " << (i + 1) << ": " << books[i].title << " by " << books[i].author << std::endl;
    }

    delete[] books; 
    return 0;
}
