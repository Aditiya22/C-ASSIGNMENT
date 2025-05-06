#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int size;
public:
    DynamicArray(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;
        }
    }

    ~DynamicArray() {
        delete[] arr;
        cout << "Dynamic array memory deallocated." << endl;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray array(5);
    array.display();
    return 0;
}
