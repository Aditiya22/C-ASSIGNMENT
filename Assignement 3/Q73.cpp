#include <iostream>
using namespace std;

class Vector {
private:
    int* arr;
    int size;
public:
    Vector(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;
        }
    }

    ~Vector() {
        delete[] arr;
    }

    int& operator[](int index) {
        return arr[index];
    }
};

int main() {
    Vector vec(5);
    for (int i = 0; i < 5; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
