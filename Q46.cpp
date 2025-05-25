//46.	Write a C++ program to calculate the sum of digits of a given number using a while loop
#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter the number:";
	cin>>n;
	int i=n;
	while(n>0){
		int d=n%10;
		sum=sum+d;
		n=n/10;
	}
	cout<<"sum of the digits:"<<sum<<endl;
	return 0;
}
