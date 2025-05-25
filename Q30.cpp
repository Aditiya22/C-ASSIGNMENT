//30.	Write a C++ program to reverse a given number using a while loop.
#include<iostream>
using namespace std;
int main(){
	int n,reverse=0;
	cout<<"enter the integer:";
	cin>>n;
	while(n>0){
		reverse=reverse*10+n%10;
		n=n/10;
	};
	cout<<"the reverse number:"<<reverse<<endl;
	return 0;
}
