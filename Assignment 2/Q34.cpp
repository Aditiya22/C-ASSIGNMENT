//34. Implement a function that increments the value of an integer by 10 using call by reference.
#include<iostream>
using namespace std;

void ten(int &value){
	value=value+10;
}
 int main(){
 	int num;
 	cout<<"enter the integer:";
 	cin>>num;
 	
 	cout<<"value before adding 10:"<<num<<endl;
 	
 	ten(num);
 	?
 	cout<<"value after adding 10:"<<num<<endl;
 	
 	return 0;
 }
