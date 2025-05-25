//Q42. Implement overloaded functions to find the maximum of two and three numbers
#include<iostream>
using namespace std;

int maxi(int a,int b){
	return (a<b);
}
int maxi(int a,int b,int c){
	return max(max(a, b), c);
}

int main(){
	int num1,num2,num3;
	cout<<"enter the first integer:";
	cin>>num1;
	cout<<"enter the second integer:";
	cin>>num2;
	
	cout << "Maximum of " << num1 << " and " << num2 << " is: " << max(num1, num2) << endl;
	
	cout<<"enter the first integer:";
	cin>>num1;
	cout<<"enter the second integer:";
	cin>>num2;
    cout<<"enter the third integer:";
    cin>>num3;
    
     cout << "Maximum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << max(num1, num2, num3) << endl;

	return 0;
}
