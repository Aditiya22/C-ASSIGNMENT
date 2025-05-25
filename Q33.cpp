//33.	Write a C++ program to count the number of digits in a given number using a while loop.
#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cout<<"enter the number:";
	cin>>n;
	
	while(n>0){
		count=count+1;
		n=n/10;
	}
	cout<<"total number of digits:"<<count;
	return 0;
}
