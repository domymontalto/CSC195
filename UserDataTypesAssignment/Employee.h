#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	string name;
	unsigned short age;
	string zipcode;
	float wage;
	unsigned short hoursWorked;
	static const float TAX;
public:
	void Read();
	void Write();
};
