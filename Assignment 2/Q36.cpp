//36.Write an inline function that calculates the square of a number.
#include<iostream>
using namespace std;

inline square(int a){
	return a*a;
}

int main(){
	int num;
	cout<<"enter the integer:";
	cin>>num;
	
	cout<<"the square of "<<num<<" is:"<<square(num)<<endl;
	return 0;
}
