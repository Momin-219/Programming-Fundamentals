#include<iostream>
using namespace std;
const int rows = 5;
const int columns = 5;
void enter(int array[][columns])
{
	array[rows][columns];
	cout<<"Enter the Matrix:"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<"Enter at location: "<<i<<" "<<j<<endl;
			cin>>array[i][j];
		}
	}
	cout<<"Data :"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}	
}

void calculation(int array[][columns])
{
	int index;
	index = rows/2;
	cout<<"The middle row is:"<<endl;
	for(int j=0; j<rows; j++)
	{
		cout<<array[index][j]<<" ";
	}
	cout<<endl;
	cout<<"The middle column is:"<<endl;
	for(int j=0; j<columns; j++)
	{
		cout<<array[j][index]<<" ";
	}
}
int main()
{
	int array[rows][columns];
	enter(array);
	calculation(array);
	system("pause");
	return 0;
}
