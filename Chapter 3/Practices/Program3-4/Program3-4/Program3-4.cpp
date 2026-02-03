#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	/*
	Program 3-4
	Accepts no arguments
	Takes input from the user for the length of one side of a square
	and finds the area of the square using the pow() function
	*/

	// define the side
	int side;

	// get the length of one side of a square
	cout << "Enter the length of one side of the square: ";
	cin >> side;

	// output the area
	cout << "The area of a square with a side measurement of 3 is: " << pow(side, 2) << endl;
}