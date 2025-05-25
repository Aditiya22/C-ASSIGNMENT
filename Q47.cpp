//47.	Write a C++ program to reverse a given string using a for loop.
#include<iostream>
using namespace std;
int main(){
	char n,reverse=0;
	cout<<"enter the string:";
	getline(cin,n);
	int length=n.length();
	for(int i=length;i>0;i--){
		reverse=reverse+n(i);
	}
	cout<<"the reverse string:"<<reverse<<endl;
	return 0;
}
