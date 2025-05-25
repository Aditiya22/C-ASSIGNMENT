//57.	Write a C++ program to find duplicate elements in an array using nested for loops.
#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements in the array are:\n";

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; 
            }
        }
    }

    cout << endl;
    return 0;
}

