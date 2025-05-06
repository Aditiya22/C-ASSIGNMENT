#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Queue {
    vector<T> elements;
public:
    void enqueue(T element) {
        elements.push_back(element);
    }
    void dequeue() {
        if (!elements.empty()) {
            elements.erase(elements.begin());
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
    Queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
