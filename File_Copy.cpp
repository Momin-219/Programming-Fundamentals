#include<iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;

main()
{
ifstream inFile("2.txt");
ofstream outFile("new_File");
//if(!inFile || !outFile)
//	{cout<<"Can't open the file"<<endl;
//	exit(1);
//	}
char c;
while(inFile.get(c))
{
//outFile.put(c);
cout<<c;
}
}

