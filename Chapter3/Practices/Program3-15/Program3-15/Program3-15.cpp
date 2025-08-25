#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/*
	Program 3-15
	Accepts no arguments
	Outputs the same value using different levels of precision
	*/

	// initialize variables
	double quotient, number1 = 132.364, number2 = 26.91;

	// perform caclulations and output, decreasing the precision each time
	quotient = number1 / number2;
	cout << quotient << endl;
	cout << setprecision(5) << quotient << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << setprecision(2) << quotient << endl;
	cout << setprecision(1) << quotient << endl;

	return 0;
}