#include <iostream>

using namespace std;

int main()
{
	/*Program 3-3
	Accepts no arguments
	It takes input from the user for 3 values, first an integer
	then a double, then a character
	It then outputs them in the order they are taken as input
	*/

	// define variables
	int whole;
	double fractional;
	char letter;

	// take input from the user
	cout << "Enter an integer, a double, and a character seperated by a space: ";
	cin >> whole >> fractional >> letter;

	// output the values in the order they were recieved
	cout << "For the integer value you entered: " << whole << endl;
	cout << "For the double value you entered: " << fractional << endl;
	cout << "For the character you entered: " << letter << endl;

	return 0;
}