#include "Employee.h"
#include <iostream>
using namespace std;

int main()
{
	Employee employees[5];
	int numEmployee;

	std::cout << "Number of employees: ";
	std::cin >> numEmployee;
	cout << endl;

	for (int i = 0; i < numEmployee; i++) {
		employees[i].Read();
		cout << endl;
	}

	for (int i = 0; i < numEmployee; i++) {
		employees[i].Write();
		cout << endl;
	}
}

