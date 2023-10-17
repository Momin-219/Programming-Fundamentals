#include<iostream>
using namespace std;
//C++ CODE TO EVALUATE HIGHEST AND SECOND HIGHEST ELEMENTS FROM THE ARRAYS

void enter(int array[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<"Enter at location "<<i<<" : ";
		cin>>array[i];
	}
	int highest = 0;
	for(int i=0; i<size; i++)
	{
		if(highest<array[i])
		{
			highest=array[i];
		}
	}
	cout<<"Highest Element: "<<highest<<endl;
	int second_highest = 0;
	for(int i=0; i<size; i++)
	{
		if(array[i]>second_highest && array[i]!=highest)
		{
			second_highest = array[i];
		}
	}
	cout<<"Second Highest Element: "<<second_highest<<endl;
	//size++;
	/*int diff = highest - second_highest;
	for(int i=0; i<size; i++)
	{
		if(array[i] == highest)
		{
			for(int k=i+1; k<size; k++)
			{
				int temp = array[k];
				array[k] = 0;
				array[k+1] = temp;
			}
		}
	}
	for(int i=0; i<size; i++)
	{
		if(array[i] == highest)
		{
			array[i] = second_highest;
			array[i+1] = diff;
		}
	}
	for(int i=0; i<size; i++)
	{
		cout<<"i:"<<i<<": "<<array[i]<<endl;
	}*/
}

int main()
{
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int array[size];
	enter(array, size);
	system("pause");
	return 0;
}
