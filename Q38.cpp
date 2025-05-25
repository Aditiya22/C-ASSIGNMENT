//38.	Write a C++ program to find the GCD (Greatest Common Divisor) of two numbers using a while loop
#include<iostream>
using namespace std;
int main(){
	int num1,num2,min=0,gcd;
	cout<<"enter the first integer:";
	cin>>num1;
	cout<<"enter the second integer:";
	cin>>num2;
	
	min=num1;
	if(min>num2){
		min=num2;
	}
	
	int i=1;
    while(i<=min/2){
    	if((num1%i==0) && (num2%i==0)){
    		gcd=i;
    		i++;
		}
	}
	cout<<"gcd:"<<gcd<<endl;
	return 0;	
}

