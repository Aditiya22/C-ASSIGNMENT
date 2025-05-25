//34.	Write a C++ program to print the sum of all even numbers between 1 and 100 using a for loop.
#include<iostream>
using namespace std;
int main(){
	int sum;
	for(int i=0;i<=100;i=i+2){
	   sum=sum+i;
	};
	cout<<"the sum of all even number is:"<<sum<<endl;
	return 0;
}
