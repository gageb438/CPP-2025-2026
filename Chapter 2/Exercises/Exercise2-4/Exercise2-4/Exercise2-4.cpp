#include <iostream>

using namespace std;

// exercise 2-4 calculates the tax for a certain meal charge.
// the tip is 20% and it outputs correctly

int main()
{
	// set variable
	const double cost = 88.67, tax = .065 * cost, tip = .20 * cost, total = cost + tax + tip;


	// output
	cout << "Meal Cost:\t\t$" << cost << endl << "Total Tax:\t\t$" << tax << endl << "Total Tip:\t\t$" << tip << endl << "Total Bill:\t\t$" << total << endl;

	// return 0
	return 0;
}