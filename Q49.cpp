//49.	Write a C++ program to find the sum of all elements in an array using a for loop.
#include<iostream>
using namespace std;
int main(){
	int i,sum=0;
	int arr[5]={89,87,56,45,66};
	for(i=0;i<=5;i++){
		 sum=sum+arr[i];
	}
	cout<<"the sum of the array:"<<sum;
	return 0;
}
