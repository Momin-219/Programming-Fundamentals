#include<iostream>
using namespace std;
const int rows = 3;
const int columns = 3;
void enter(int matrix[rows][columns])
{

	matrix[rows][columns];
	cout<<"Enter the Matrix:"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<"Enter at location: "<<i<<" "<<j<<endl;
			cin>>matrix[i][j];
		}
	}
	cout<<"Matrix :"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}	
}
void calculation(int matrix[][columns])
{
	int transpose[rows][columns];
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			transpose[i][j] = matrix[j][i];
		}
	}
	cout<<"The Transpose matrix is:"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<transpose[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int matrix[rows][columns];
	enter(matrix);
	calculation(matrix);
	system("pause");
	return 0;
}
