#include <iostream>

using namespace std;

int main()
{
	/*
	Program3-10
	Accepts no arguments
	Takes input from the user in the form of an integer
	uses type casting to convert the integer to a char data type
	and output the result.
	*/

	int randomint;

	cout << "Enter an integer value to see the char conversion: ";
	cin >> randomint;

	cout << "The integer " << randomint << " converted to a char is: " << static_cast<char>(randomint) << endl;

	return 0;
}