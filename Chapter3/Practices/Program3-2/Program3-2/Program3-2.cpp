#include <iostream>

using namespace std;

int main()
{
	/*Program3-2
	accepts no arguments
	takes input from the user for length and width using a single cin statemenet
	calculates and outputs the area of a rectangle
	*/
	
	// define variables
	int length, width, area;

	// prompt the user and take input for length and width
	cout << "Enter values for length and width, seperated by a space: ";
	cin >> length >> width;

	// perform calculates and output area
	area = length * width;
	cout << "The area of a rectangle with a length of " << length << " and a width of " << width << " is " << area << endl;

	return 0;
}
