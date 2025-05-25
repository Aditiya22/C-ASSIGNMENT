//28. Write a function prototype for a function that calculates the factorial of a number.
#include<iostream>
using namespace std;
int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact= fact*i;
	}
	return fact;
}
int main(){
	int num;
	cout<<"enter the number:";
	cin>>num;
	
	cout<<"factorial of "<<num<<" is "<<factorial(num);
	return 0;
}
