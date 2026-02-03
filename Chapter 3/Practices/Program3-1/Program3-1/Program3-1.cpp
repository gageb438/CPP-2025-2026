#include <iostream>

using namespace std;

int main()
{
	/* Program3-1
	recieves no arguments
	takes input from the user in the form of length and width
	calculates and outputs the area of a rectangle
	*/

	// define variables
	int length, width, area;

	// take input from the user for length and width
	cout << "Input a value for length: ";
	cin >> length; // take input and assign it to the length

	cout << "Input a value for width: "; // prompt the user for width
	cin >> width;

	// perform calculations and output the area
	area = length * width;
	cout << "The area of a rectangle with a length of " << length << " and a width of " << width << " is " << area << endl;

	return 0;
}