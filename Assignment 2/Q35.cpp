//35. Create a function that modifies the elements of an array using call by reference.
#include <iostream>
using namespace std;

void modifyArray(int arr[], int size) {
    for(int i=0; i<size; i++) arr[i] += 1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
	cin >> arr[i];
}
    modifyArray(arr, n);
    for(int i=0; i<n; i++){
	cout << arr[i] << " ";
}
    return 0;
}
