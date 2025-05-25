//43.	Write a C++ program to print the first N even numbers using a for loop.
#include<iostream>
using namespace std;
int main(){
	int n;	
	cout<<"enter the integer:";
	cin>>n;
	for(int i=0;i<n;i=i+2){
	cout<<"the even numbers is:"<<i<<endl;
	}
	return 0;
}
