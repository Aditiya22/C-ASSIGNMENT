//38. Implement a program that uses an inline function to calculate the sum of two numbers.
#include<iostream>
using namespace std;

inline sum(int a, int b){
	return a+b;
}
 
int main(){
	int num1;
	int num2;
	cout<<"enter the first integer:";
	cin>>num1;
	cout<<"enter the second integer:";
	cin>>num2;
	
	cout<<"the sum of two integer "<<num1<<" and "<<num2<<" is:"<<sum(num1,num2);
	return 0;
}
