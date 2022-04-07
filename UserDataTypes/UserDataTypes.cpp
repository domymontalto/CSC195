// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// difference between struct and class is that struct contains only data no methods
//class Point
//{
// by default a class is private
//public:
//	int x;
//	int y;
//
//	//how to make properties private
////private:
////	int y;
//};

// class
class Sandwich
{
public:

	Sandwich()
	{
		cout << "constructor\n";
	}

	// constructor
	Sandwich(string name, float price) : name(name), price(price), isHot(false)
	{
		cout << "constructor\n";
		// you can use the : name(name), price(price) or this
		//this->name = name;
		//this->price = price;
	}

	// destructor: They distroy instances (at program temination, at the end of scope or if we use delete)
	//we can't really call them and they never have parameters.
	~Sandwich()
	{
		cout << "destructor\n";
	}


	// declaration and definition of a method 
	void Read() {
		cout << "enter name: ";
		cin >> name;
	}
	// declaration of a method
	void Write();

private:
	string name;
	float price;
	bool isHot;
};

	// definition of a method
void Sandwich::Write()
{
	cout << "name: " << name << endl;
}

// structure
struct Point 
{
	// by default a struct is public
	int x;
	int y;
};

int main()
{
	Point point;
	point.x = 300;
	point.y = 200;


	{
		// scope
		int j = 5;
		{
			// internal scopes can see externa onces
			j = 10;
		}
	}

	// This is in a scope to show that destructor is called after scope
	{
		Sandwich sandwich("ham", 4.5);
		//sandwich.Read();
		sandwich.Write();
	}

	// when we run the program shows that the destructor was called before this line
	cout << "end of program\n";


	//  scoped enum

	// Enums contain named integers (named integer constants)
	enum class Difficulty
	{ 
		Easy,
		Medium,
		Hard
	};

	enum class Eggs 
	{
		Easy,
		Scrambled
	};

	Difficulty d = Difficulty::Easy;

	if (d == Difficulty::Easy) cout << "Easy\n";

	// union

	union Data
	{
		int i;
		float f;
		char c;
		bool b;
	};

	Data data;
	data.i = 10;
	//data.f = 23.f;
	//data.b = true;

	cout << &data.i << endl;
	cout << &data.f << endl;
	cout << data.i << endl;
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
