#include<iostream>
using namespace std;
//C++ PROGRAM TO REMOVE A LETTER FROM GIVEN ARRAY!!!

void removing(char array[], char word)
{
	int k=0;
	while(array[k] != '\0')
	{
		k++;
	}
	int size = k;
	for(int i=0; i<size; i++)
	{
		if(array[i] == word)
		{
			array[i] = '1';
		}
	}
	for(int i=0; i<size; i++)
	{
		if(array[i] == '1')
		{
			continue;
		}
		cout<<array[i];
	}
}

int main()
{
	char array[100];
	char word;
	cout<<"Enter the paragraph: ";
	cin.getline(array, 100);
	cout<<"Enter the letter you want to remove: ";
	cin>>word;
	removing(array, word);
	system("pause");
	return 0;
}
