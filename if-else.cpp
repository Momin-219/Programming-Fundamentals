#include<iostream>
using namespace std;
//BASIC IF-ELSE C++ PROGRAM

int main()
{
	int num1 = 0, num2 = 0;
	cout << "Enter num1 and num2 respcrively: ";
	cin >> num1 >> num2;
	cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
	if(num1>num2)
	{
		cout << "Num1 is greater then Num2!!!" << endl;
	}
	else if (num2 > num1)
	{
		cout << "Num2 is greater then Num1!!!" << endl;
	}
	else 
	{
		cout << "Both Numbers entered are equal!!!" << endl;
	}
	cout << "Moving on to the 3rd part!!!" << endl;
	cout << "Enter the number: ";
	cin >> num1;
	int total = 0;
	while(num1 != -1)
	{
		total += num1;
		cin >> num1;
	}
	cout << "Sum is: " << total << endl;
	cout << "Moving on to the 4th part!!!" << endl;
	cout << "Enter number of working hours and enter wage/hour respcrively: ";
	cin >> num1 >> num2;
	cout << "Salary: " << num1 * num2 << endl;
	cout << "Moving on to the 5th part!!!" << endl;
	float far = 0.0, celc = 0.0;
	cout << "Enter Fahrenheit temperature: ";
	cin >> far;
	celc = (5.0 / 9) * (far - 32.0);
	cout << "Corresponding Celsius temperature is: " << celc << endl;
	cout << "Moving on to the 6th part!!!" << endl;
	cout << "Enter the Number: ";
	cin >> num1;
	if(num1 != 5 && num1 != 6)
	{
		cout << "The number entered is neither 5 nor 6" << endl;
	}
	else
	{
		cout << "The number entered is either 5 or 6" << endl;
	}
	cout << "Moving on to the 7th part!!!" << endl;
	cout << "Enter the Number: ";
	cin >> num1;
	if(num1>0 && num1<10)
	{
		cout << "Blue" << endl;
	}
	else if (num1 > 10 && num1 < 20)
	{
		cout << "Red" << endl;
	}
	else if (num1 > 20 && num1 < 30)
	{
		cout << "Green" << endl;
	}
	else 
	{
		cout << "Not a correct colour option." << endl;
	}
	return 0;
}
