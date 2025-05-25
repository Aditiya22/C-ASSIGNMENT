//36.	Write a C++ program to print the elements of an array in reverse order using a for loop.
#include<iostream>
using namespace std;
int main(){
	int i;
	int arr[5]={1,2,3,4,5};
	for(i=5;i>0;i--){
		cout<<"the reverse array:"<<arr[i]<<endl;
	}
	return 0;
}
