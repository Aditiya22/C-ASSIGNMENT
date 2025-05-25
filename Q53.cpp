//53.	Write a C++ program to convert a binary number to a decimal number using a while loop.
#include <iostream>
using namespace std;
int main() {
    int binary, decimal = 0,remainder,base;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    int i=binary;
    while (i> 0) {
        remainder =i % 10;          
        decimal = decimal + remainder * base;
        i = i / 10;             
       base = base * 2;                  
    }
    cout<< "Decimal value of the binary number: "<<decimal< endl;

    return 0;
}

