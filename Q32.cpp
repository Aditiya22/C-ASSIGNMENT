//32.	Write a C++ program to print the Fibonacci series up to a given number of terms using a for loop.
#include<iostream>
using namespace std;
int main(){
	int n,f,f1,f2;
	cout<<"enter a number";
	cin>>n;
	for(int i=1;i<=n;i++){
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	cout<<"the fabocci series is:"<<f<<endl;
	return 0;
}
