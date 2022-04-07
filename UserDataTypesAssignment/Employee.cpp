#include "Employee.h"

const float Employee::TAX = 0.1f;

void Employee::Read()
{
	cout << "enter name:";
	cin >> name;
	cout << "enter age: ";
	cin >> age;
	cout << "enter zipcode: ";
	cin >> zipcode;
	cout << "enter wage: ";
	cin >> wage;
	cout << "enter hours worked per week ";
	cin >> hoursWorked;
}

void Employee::Write()
{
	cout << "name: " << name << endl;
	cout << "age: " << age << endl;
	cout << "zip code: " << zipcode << endl;
	cout << "wage: " << wage << endl;
	cout << "hours worked per week: " << hoursWorked << endl;
	cout << "weekly gross pay: " << hoursWorked * wage << endl;
	cout << "weekly net pay: " << ((hoursWorked * wage) - ((hoursWorked * wage) * TAX))  << endl;
	cout << "yearly gross pay: " << (hoursWorked * wage) * 52 << endl;
	cout << "yearly net pay: " << ((hoursWorked * wage) - ((hoursWorked * wage) * TAX)) * 52 << endl;
	

}