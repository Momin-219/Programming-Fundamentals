#include<iostream>
using namespace std;
const int rows = 3;
const int columns = 3;
void enter1(int matrix1[rows][columns])
{

	matrix1[rows][columns];
	cout<<"Enter the 1st matrix"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<"Enter at location: "<<i<<" "<<j<<endl;
			cin>>matrix1[i][j];
		}
	}
	cout<<"Matrix 1:"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<matrix1[i][j]<<" ";
		}
		cout<<endl;
	}	
}
void enter2(int matrix2[rows][columns])
{

	matrix2[rows][columns];
	cout<<"Enter the 2nd matrix"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<"Enter at location: "<<i<<" "<<j<<endl;
			cin>>matrix2[i][j];
		}
	}
	cout<<"Matrix 2:"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<matrix2[i][j]<<" ";
		}
		cout<<endl;
	}	
}
void addition(int matrix1[][columns], int matrix2[][columns])
{
	int answer[rows][columns];
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			answer[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	cout<<"The final matrix after addition is: "<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<answer[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int matrix1[rows][columns];
	int matrix2[rows][columns];
	enter1(matrix1);
	enter2(matrix2);
	addition(matrix1, matrix2);
	system("pause");
	return 0;
}
