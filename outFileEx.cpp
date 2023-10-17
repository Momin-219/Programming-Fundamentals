#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream outFile;
outFile.open("output");
if(!outFile)
{cout<<"Can't open the file\n";
}
char name[]="FAST Lahore";
outFile<<name;
outFile.close();
system("pause");
return 0;

}

