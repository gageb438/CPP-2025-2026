#include <iostream>

using namespace std;

int main()
{
	/*
	Program3-5
	Accepts no arguments
	Tkaes input from the user for the radius of a circle,
	calculates the area using the formula area = PI * R^2
	and outputs it to the user. (Initialize a constant for PI with the value of 3.14159
	*/

	const float PI = 3.14159;

	double radius, area;

	cout << "Enter a value for the radius of a circle: ";
	cin >> radius;

	area = PI * pow(radius, 2);

	cout << "The area of a circle iwth the radius " << radius << " is: " << area << endl;
}