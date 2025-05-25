//51.	Write a C++ program to find the sum of all even and odd numbers between 1 and 100 using separate for loops.
#include<iostream>
using namespace std;
int main(){
	int sum1=0,sum2=0,e,o;
	for(int i=0;i<=100;i+=2){
		sum1=sum1+i;
	}
	cout<<"the sum of even numbers is :"<<sum1<<endl;
	
	for(int j=1;j<=100;j+=2){
		sum2=sum2+j;
	}
	cout<<"the sum of odd number is :"<<sum2<<endl;
	return 0;
}
