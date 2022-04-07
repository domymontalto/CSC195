// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <String>

using namespace std;


namespace montalto
{
    int i = 10;
}

int main()
{

    // unsigned is always positive
    unsigned int i = 10;
    float f = 23;
    bool b = true;
    string name;

    // const can't change
    const float TAX = 0.085;
    char initial = 'D';

    cout << initial;

    int ages[4];
    ages[0] = 24;
    ages[1] = 10;
    //ages[32] = 56;


    cin >> name;
    cout << name << endl;

    if (i) cout << "true\n";

    cout << i << endl;
    cout << "Hello Data!\n";
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
