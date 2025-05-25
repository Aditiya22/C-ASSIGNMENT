//45.	Write a C++ program to print the numbers from 1 to 100, but replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz" using a for loop.
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=100;i++){
		if(i%3==0){
			cout<<"fizz"<<endl;
		}
		else if(i%5==0){
			cout<<"buzz"<<endl;
		}
		else{
			cout<<i<<endl;
		}
	}
	return 0;
}

