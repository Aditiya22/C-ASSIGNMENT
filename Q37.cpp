//37.	Write a C++ program to calculate the average of numbers in an array using a for loop.
#include<iostream>
using namespace std;
int main(){
	int avg,sum=0;
	int arr[5]={22,55,34,78,69};
	for(int i=0;i<5;i++){
		sum=sum+arr[i];
		avg=sum/2;
	}
	cout<<"the average of the array is:"<<avg<<endl;
	return 0;
}n
