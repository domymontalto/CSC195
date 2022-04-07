// Again.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Panino {
	int x = 300;
	int y = 100;
};

class Sandwich
{
public:

	void Write() {
		cout << "Insert name of the sandwich: ";
		cin >> name;
	}

	void Read();
private:
	string name;
};

void Sandwich::Read() {
	cout << "The name of the sandwich is: " << name << endl;
}

int main()
{
	/*string name;
	unsigned char initial;
	unsigned short age;
	bool isAdult;
	unsigned int zipcode;
	float wage;
	unsigned short daysWorked;
	unsigned short hoursWorkedPerDay[7];
	const float TAX = 0.1f;

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

	isAdult = (age >= 18);

	cout << "is adult: " << isAdult << endl;


	for (int i = 0; i < daysWorked; i++) {
		cout << "enter hours worked for day " << i + 1 << ": ";
		cin >> hoursWorkedPerDay[i];
	}

	unsigned short totalHours = 0;

	for (int i = 0; i < daysWorked; i++) {
		totalHours += hoursWorkedPerDay[i];
	}

	float grossIncome = totalHours * wage;
	float netIncome = grossIncome - (grossIncome * TAX);

	cout << name << " worked " << totalHours << " hours at $" << wage << " an hour." << endl;
	cout << "gross income: $" << grossIncome << endl;
	cout << "net income: $" << netIncome;*/

	Sandwich sandwich;
	sandwich.Write();
	sandwich.Read();	

	Panino panino;
	cout << panino.x << endl;
	cout << panino.y << endl;
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
