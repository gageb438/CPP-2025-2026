#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	/*
	Program 3-24
	Accepts no arguments
	It takes input from the user for length of side a
	and the length of side b and calculates and outputs the length of the hypotenuse
	*/

	double sidea, sideb, hypotenuse;

	cout << "Enter the length of side a: ";
	cin >> sidea;
	
	cout << "Enter the lenght of side b: ";
	cin >> sideb;

	hypotenuse = sqrt(pow(sidea, 2.0) + pow(sideb, 2.0));
	cout << "The length of the hypotenuse is: " << setprecision(2) << hypotenuse << endl;

	return 0;
}