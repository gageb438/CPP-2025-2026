#include <iostream>

using namespace std;

int main()
{
	/*
	Program 3-8
	Accepts no arguments
	demonstrates float overflow and underflow with the maximum float being 2.0e38
	*/

	// define variables
	float test;

	// multiplyu to overflow the float test and output the results
	test = 2.0e38 * 1000;
	cout << "2.0e38 * 1000 results in the following overflow: " << test << endl;

	// divide to underflow test and output the results
	test = 2.0e-38 / 2.0e38;
	cout << "2.0e-38 / 2.0e38 results in the following underflow: " << test << endl;

	return 0;
}