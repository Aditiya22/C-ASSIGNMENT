//Q43.Create overloaded functions to print different data types (int, float, string).
#include<iostream>
using namespace std;

void over(int a){
	cout<<a<<endl;
}

void over(float a){
	cout<<a<<endl;
}

void over(string a){
	cout<<a<<endl;
}

int main(){
	over(7);
	over(8.9f);
	over("HI");
	return 0;
}
