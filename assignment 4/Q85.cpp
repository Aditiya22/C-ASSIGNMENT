#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class SafeArray {
    T* arr;
    int size;
public:
    SafeArray(int s) : size(s) {
        arr = new T[size];
    }
    ~SafeArray() {
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
    SafeArray<int> arr(5);
    try {
        arr[0] = 10;
        arr[1] = 20;
        cout << arr[0] << " " << arr[1] << endl;
        cout << arr[5] << endl; 
    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    }
    return 0;
}
