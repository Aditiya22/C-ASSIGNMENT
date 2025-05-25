//37. Create an inline function that returns the cube of a number.
#include<iostream>
using namespace std;

inline cube(int a){
	return a*a*a;
}

int main(){
	int num;
	cout<<"enter the integer:";
	cin>>num;
	
	cout<<"the cube of "<<num<<" is:"<<cube(num)<<endl;
	return 0;
}
