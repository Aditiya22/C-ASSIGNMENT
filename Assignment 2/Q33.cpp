//Q33 Write a function to swap two integers using call by reference.
#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int enter=a;
	a=b;
	b=enter;
}

int main(){
	int num1,num2;
	
	cout<<"enter the first number:";
	cin>>num1;
	cout<<"enter the second number:";
	cin>>num2;
	
	cout<<"before swap: num1:"<<num1<<" num2:"<<num2<<endl;
	
	swap(num1,num2);
	
	cout<<"after swap:num1:"<<num1<<" num2:"<<num2<<endl;
	
	return 0;
}
