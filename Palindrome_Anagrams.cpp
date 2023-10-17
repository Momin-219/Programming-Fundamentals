#include<iostream>
#include<fstream>

using namespace std;

void palindrome1(char word1[21])
{
	int i, size = 0;
	for (i = 0; i < 21; i++)
	{
		if (word1[i] != '\0')
		{
			size++;
		}
		else
		{
			break;
		}
	}
	//	cout << size;
	int flag = 0, temp = 0;
	for (int i = 0; i < size / 2; i++)
	{
		if (word1[i] != word1[(size - 1) - i])
		{
			flag = flag + 1;
		}
	}
	if (flag == 1)
	{
		cout << "Yes ";
	}
	else
	{
		cout << "No ";
	}
}
void palindrome2(char word2[21])
{
	int i, size = 0;
	for (i = 0; i < 21; i++)
	{
		if (word2[i] != '\0')
		{
			size++;
		}
		else
		{
			break;
		}
	}
	//	cout << size;
	int flag = 0, temp = 0;
	for (int i = 0; i < size / 2; i++)
	{
		if (word2[i] != word2[(size - 1) - i])
		{
			flag = flag + 1;
		}
	}
	if (flag == 1)
	{
		cout << "Yes ";
	}
	else
	{
		cout << "No ";
	}
}

void super_anagrams(char word1[21], char word2[21])
{
	int i = 0, size1;
	while (word1[i] != '\0')
	{
		i++;
	}
	size1 = i + 1;
	int j = 0, size2;
	while (word1[j] != '\0')
	{
		j++;
	}
	size2 = j + 1;
	int counter = 0;
	if (size1 == size2)
	{
		for (int i = 0; i < size1; i++)
		{
			for (int j = 0; j < size2; j++)
			{
				if (word1[i] == word2[j])
				{
					counter = counter + 1;
					break;
				}
			}
		}
		if (counter == size1)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	else
	{
		cout << "No" << endl;
	}
}

int main()
{
	char word1[21];
	char word2[21];
	ifstream inFile;
	inFile.open("input.txt");
	if (!inFile)
	{
		cout << "file Can't opened...\n";
	}
	while (!inFile.eof())
	{
		inFile >> word1 >> word2;
		if (!inFile.eof()) {
			palindrome1(word1);
			palindrome2(word2);
			super_anagrams(word1, word2);
		}
	}
	inFile.close();
	system("pause");
	return 0;
}
