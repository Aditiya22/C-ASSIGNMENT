#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int key = 3;
    int index = linearSearch(arr, 5, key);
    cout << "Index of " << key << ": " << index << endl;
    return 0;
}
