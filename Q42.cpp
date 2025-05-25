//42.	Write a C++ program to find the smallest number in an array using a for loop.
#include<iostream>
using namespace std;
int main(){
	int i;
	int arr[5]={23,45,77,1,89};
	for(i=1;i<5;i++){
		if(arr[0]>arr[i]){
			arr[0]=arr[i];
		}
	}
	cout<<"smallest number of the array:"<<arr[0];
	return 0;
}
