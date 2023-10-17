#include <iostream>
#include <fstream>
using namespace std;
main()
{
char name[50]; 
int sal;
ifstream inFile;
char inputFileName[] = "employee.txt"; 
inFile.open(inputFileName); 
ofstream outFile; 
char outputFileName[] = "empSalary";
outFile.open(outputFileName,ios::out);

if (!inFile || !outFile)
{
 cout << "Can't open input file named " << inputFileName << endl;
 exit(1);
}
outFile <<"Name"<<" "<<"Salary"<<endl;
while (!inFile.eof())
 {
 inFile >> name >> sal;
 
 outFile <<name<<" "<<(sal+2000)<<endl;
  }
 inFile.close();
 outFile.close();


}
