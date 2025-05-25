//35.	Write a C++ program to find the largest number in an array using a for loop.
#include<iostream>
using namespace std;
int main(){
 int i;
    int arr[5] = {1, 1000, 100, 10000, 10}; 
    for (i=1;i<5;i++) { 
        if (arr[0]<arr[i]){
              arr[0]=arr[i];
		} 
    }
    cout << "Largest number of the array: "<< arr[0];
    return 0;
}
