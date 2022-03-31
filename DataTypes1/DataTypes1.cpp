// DataTypes1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	char initial;
	unsigned short age;
	bool isAdult;
	unsigned int zipcode;
	float wage;
	unsigned short daysWorked;
	unsigned short hoursWorkedPerDay[7];
	const float TAX = 0.1f;
	unsigned short totalHours = 0;

	cout << "enter first name: ";
	cin >> name;
	cout << "enter last initial: ";
	cin >> initial;
	cout << "enter age: ";
	cin >> age;
	cout << "enter zipcode: ";
	cin >> zipcode;
	cout << "enter wage: ";
	cin >> wage;
	cout << "enter days worked: ";
	cin >> daysWorked;

	if (age >= 18) {
		isAdult = true;
	}
	else {
		isAdult = false;
	}

	for (int i = 0; i < daysWorked; i++) {
		cout << "enter hours worked for day " << i + 1 << ": ";
		cin >> hoursWorkedPerDay[i];
	}

	for (int i = 0; i < daysWorked; i++) {
		totalHours += hoursWorkedPerDay[i];
	}

	double grossIncome = totalHours * wage;
	double netIncome = grossIncome - (grossIncome * TAX);

	cout << name << " worked " << totalHours << " hours at $" << wage << " an hour." << endl;
	cout << "gross income: $" << grossIncome << endl;
	cout << "net income: $" << netIncome << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
