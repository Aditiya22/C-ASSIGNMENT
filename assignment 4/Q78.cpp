#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
    vector<T> elements;
public:
    void push(T element) {
        elements.push_back(element);
    }
    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        }
    }
    void display() {
        for (const auto& elem : elements) {
            cout << elem << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.display();
    return 0;
}
