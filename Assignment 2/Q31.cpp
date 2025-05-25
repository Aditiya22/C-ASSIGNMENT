//Q31 Implement a function that takes two integers and returns their product.
#include<iostream>
using namespace std;

int multiply(int a,int b){
	return a*b;
}

int main(){
	int num1;
	int num2;
	cout<<"enter the first number:";
	cin>>num1;
	cout<<"enter the second number:";
	cin>>num2;
	
	cout<<"the product of two numbers are:"<<multiply(num1,num2)<<endl;
	return 0;
}
