//29. Implement a C++ program with a function prototype for a function that returns the maximum of three numbers.
#include <iostream>
using namespace std;
int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) 
	return a;
    else if (b >= a && b >= c) 
	return b;
    else 
	return c;
}
int main() {
    int num1, num2, num3;
    cout<<"enter the first number:";
    cin>>num1;
    cout<<"enter the second number:";
    cin>>num2;
    cout<<"enter the third number:";
    cin>>num3;
    cout << "The maximum number is: " << maxOfThree(num1, num2, num3) << endl;
    return 0;
}
