#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/*
	Program 3-12
	Accepts no arguments
	outputs a series of numbers with no formatting specifier
	*/

	// initialize variables
	int num1 = 2897, num2 = 5, num3 = 837, num4 = 34, num5 = 7, num6 = 1623, num7 = 390, num8 = 3456, num9 = 12;

	// display 3 rows of 3 integers
	cout << setw(6) << num1 << " " << setw(6) << num2 << " " << setw(6) << num3 << endl;
	cout << setw(6) << num4 << " " << setw(6) << num5 << " " << setw(6) << num6 << endl;
	cout << setw(6) << num7 << " " << setw(6) << num8 << " " << setw(6) << num9 << endl;
	
	return 0;
}