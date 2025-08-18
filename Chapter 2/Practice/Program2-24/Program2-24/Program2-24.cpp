#include <iostream>

using namespace std;

int main()
{
	// program 2-24
	// program 2-24 demonstrates use of the modulus operator to extract the right most digit from the number 12345

	// initialize variables
	int number = 12345;
	int rightMost = number % 10;

	// output the rightMost number of 5
	cout << "The right-most number of " << number << " is " << rightMost << endl;

	return 0;
}