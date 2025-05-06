#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class GenericArray {
    T* arr;
    int size;
public:
    GenericArray(int s) : size(s) {
        arr = new T[size];
    }
    ~GenericArray() {
        delete[] arr;
    }
    T& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }
};

int main() {
    try {
        GenericArray<int> arr(5);
        arr[0] = 10;
        arr[1] = 20;
        cout << arr[0] << " " << arr[1] << endl;
        cout << arr[5] << endl; // This will throw an exception
    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    }
    return 0;
}
