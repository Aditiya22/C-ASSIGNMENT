//29.	Write a C++ program to find the factorial of a given number using a for loop.
#include<iostream>
using namespace std;
int main(){
	int n,i,factorial=1;
	cout<<"enter the number:";
	cin>>n;
	for(i=1;i<=n;i++){
	factorial*=i;
	};
	cout<<"factorial of given number is :"<<n<<factorial<<endl;
	return 0;
	
}
