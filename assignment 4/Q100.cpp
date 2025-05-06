#include <iostream>
#include <vector>
#include <stdexcept>
#include <memory> // For smart pointers

using namespace std;

// Base interface class for polymorphism
class CollectionBase {
public:
    virtual void display() const = 0;
    virtual size_t size() const = 0;
    virtual ~CollectionBase() {}
};

// Template class implementing a collection of type T
template <typename T>
class Collection : public CollectionBase {
private:
    vector<T> items;

public:
    void add(const T& item) {
        items.push_back(item);
    }

    void remove(size_t index) {
        if (index >= items.size()) {
            throw out_of_range("Index out of range");
        }
        items.erase(items.begin() + index);
    }

    T& get(size_t index) {
        if (index >= items.size()) {
            throw out_of_range("Index out of range");
        }
        return items[index];
    }

    size_t size() const override {
        return items.size();
    }

    void display() const override {
        cout << "Collection contents: ";
        for (const auto& item : items) {
            cout << item << " ";
        }
        cout << endl;
    }
};

int main() {
    
    vector<shared_ptr<CollectionBase>> collections;

    auto intCollection = make_shared<Collection<int>>();
    auto stringCollection = make_shared<Collection<string>>();

    collections.push_back(intCollection);
    collections.push_back(stringCollection);

       try {
        intCollection->add(10);
        intCollection->add(20);
        stringCollection->add("Hello");
        stringCollection->add("World");

       
        for (const auto& col : collections) {
            col->display();
        }

        
        cout << "Item at index 1 in intCollection: " << intCollection->get(1) << endl;
        intCollection->remove(0);

        cout << "After removal:" << endl;
        intCollection->display();

       
        cout << "Attempting to access invalid index in stringCollection..." << endl;
        cout << stringCollection->get(10) << endl;
    } catch (const exception& ex) {
        cout << "Exception caught: " << ex.what() << endl;
    }

    return 0;
}
