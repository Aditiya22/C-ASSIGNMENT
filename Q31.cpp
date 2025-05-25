//31.	Write a C++ program to check if a given number is a prime number using a for loop.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number:";
	cin>>n;
	for(int i=n;i<=n;i++){
		if(n%1==0||n%n==0){
			cout<<"the number is prime number"<<endl;
		}
		else{
			cout<<"the number is not prime"<<endl;
		}
    }
	return 0;
}
