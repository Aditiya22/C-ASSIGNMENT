//28.	Write a C++ program to print the multiplication table of a given number using a do-while loop.
#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cout<<"enter a number:";
	cin>>n;
	
	do{
	cout<<n<<"x"<<i<<"="<<(n*i)<<endl;
	i++;
	}while(i<=10);
	return 0;
}
