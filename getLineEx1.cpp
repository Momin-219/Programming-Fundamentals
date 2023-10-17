#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{char line[100];
ifstream inFile;
inFile.open("input.txt");
if(!inFile)
{cout<<"file Can't opened...\n";
}
while(!inFile.eof())
{inFile.getline(line,100);
cout<<line<<endl;
}

inFile.close();
system("pause");
return 0;

}

