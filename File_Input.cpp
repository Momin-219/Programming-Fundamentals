#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
    char name[20];
    char sal[20];
    char dept[20];
    ifstream inFile;
    inFile.open("2.txt");
    if(!inFile)
    {
        cout<<"file Can't opened...\n";
    }
  while(!inFile.eof())
  {
   inFile>>name>>sal>>dept;
//   if(!inFile.eof())
//   {
       cout<<name<<" "<<sal<<" "<<dept<<endl;
//   }
  }
inFile.close();
//for(int i=0; i<5; i++)
//{
//	cout<<name[i]<<endl;
//}
system("pause");
return 0;

}

