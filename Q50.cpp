//50.	Write a C++ program to check if a given number is a palindrome using a while loop.
#include<iostream>
using namespace std;
int main(){
	int n,reverse=0;
	cout<<"enter the integer:";
	cin>>n;
	int i=n;
	while(n>0){
		reverse=reverse*10+n%10;
		n=n/10;
	}
	if(i==reverse){
		cout<<"the number is palindrome"<<endl;
	}
	else{
		cout<<"the number is not palindrome"<<endl;
	}
	return 0;
}

