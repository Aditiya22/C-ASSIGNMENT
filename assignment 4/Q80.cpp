#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node(T val) : data(val), next(nullptr) {}
};

template <typename T>
class LinkedList {
    Node<T>* head;
public:
    LinkedList() : head(nullptr) {}
    void insert(T val) {
        Node<T>* newNode = new Node<T>(val);
        newNode->next = head;
        head = newNode;
    }
    void display() {
        Node<T>* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    void deleteNode(T val) {
        Node<T>* current = head;
        Node<T>* prev = nullptr;
        while (current && current->data != val) {
            prev = current;
            current = current->next;
        }
        if (current) {
            if (prev) {
                prev->next = current->next;
            } else {
                head = current->next;
            }
            delete current;
        }
    }
};

int main() {
    LinkedList<int> list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.display();
    list.deleteNode(2);
    list.display();
    return 0;
}
