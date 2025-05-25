//44.	Write a C++ program to print a pattern using nested for loops.
#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=10;i++){
		for(j=i;j<=10;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
