//61.	Write a C++ program to add two matrices using nested for loops.
#include <iostream>
using namespace std;
int main() {
    int rows, column;
    cout<<"enter ther row:";
    cin>>rows;
    cout<<"enter the column:";
    cin>>column;

    int matrix1[100][100], matrix2[100][100], sum[100][100];
    
    cout<< "Enter elements of first matrix:\n";
    for(int i=0;i<rows;i++)
        for(int j=0;j<column;j++) {
            cout<< "matrix1["<<i<<"]["<<j<<"]:";
            cin>> matrix1[i][j];
        }
    
    cout<< "Enter elements of second matrix:\n";
    for(int i=0;i<rows;i++)
        for(int j=0;j<column;j++){
            cout<<"matrix2["<<i<<"]["<<j<<"]:";
            cin>>matrix2[i][j];
        }
        
    for(int i=0;i<rows;i++)
        for(int j=0;j<column;j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }

    cout<< "Sum of the matrices:\n";
    for(int i=0;i<rows;i++) {
        for(int j=0;j<column;j++) {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
