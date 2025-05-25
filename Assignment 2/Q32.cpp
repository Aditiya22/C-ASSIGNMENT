//32. Create a function that prints the elements of an array.
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Array elements are: ";
    printArray(arr, size);
    
    return 0;
}

