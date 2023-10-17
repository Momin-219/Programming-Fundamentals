#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main()
{ifstream inFile;
ofstream outFile;
int sal=0,totalSal=0;
char line[100];
char *token;
inFile.open("employee.txt");
outFile.open("totalSalary");
if(!inFile || !outFile)
{cout<<"Can't open the file\n";
}
while(!inFile.eof())
{inFile.getline(line,100);
token=strtok(line," ");
token=strtok(NULL," ");
sal=atoi(token);
totalSal+=sal;

}
outFile<<"Total Salary= "<<totalSal<<endl;
inFile.close();
outFile.close();
system("pause");
return 0;

}

