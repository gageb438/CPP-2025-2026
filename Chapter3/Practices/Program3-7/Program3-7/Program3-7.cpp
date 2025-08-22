#include <iostream>

using namespace std;

int main()
{
	/*
	Program 3-7
	Accepts no arguments
	Demonstrates overflow and underflow of an integer
	*/

	// initialize testVar with the max value for a short
	short testVar = 32767;

	// output testVar
	cout << "Maximum short integer value: " << testVar << endl;

	// add 1 to make it overflow and output
	testVar += 1;
	cout << "Add 1 more to make testVar overflow: " << testVar << endl;

	// subtract 1 to make it underflow
	testVar -= 1;

	cout << "Subtract 1 to make testVar underflow back to its original value: " << testVar << endl;

	return 0;
}