//55. Write a C++ program to find the transpose of a given matrix using nested for loops.
#include<iostream>
using namespace std;
int main(){
	int row,column;
	cout<<"enter the row:";
	cin>>row;
	cout<<"enter the column:";
	cin>>column;
	
	int matrix[100][100],transpose[100][100];
	
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<"elements ["<<i<<"]["<<j<<"]:";
			cin>>matrix[i][j];
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			transpose[j][i]=matrix[i][j];
		}
	}
	for(int i=0;i<column;i++){
		for(int j=0;j<row;j++){
			cout<<transpose[i][j]<<"transpose of the matrix:"<<endl;;
		}
		cout<<endl;
	}
	return 0;
}
