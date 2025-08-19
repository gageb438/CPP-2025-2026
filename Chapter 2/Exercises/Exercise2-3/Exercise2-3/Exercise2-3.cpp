#include <iostream>

using namespace std;

// 2-3 is a program that computes sales tax on 3 differenr purchases and outputs the total

int main()
{
	// initialize variables and set first purchase
	double purchase = 75.00;
	const float stateTax = .04, countyTax = .02;
	double postState, postCounty, total;
	
	// calculate the taxes
	postState = purchase * stateTax;
	postCounty = purchase * countyTax;


	// calculate total
	total = postState + postCounty + purchase;

	// output the results.
	cout << "Purchase:\t\t\t$" << purchase << "\nState Tax:\t\t\t$" << postState << "\nCounty Tax:\t\t\t$" << postCounty << "\nTotal:\t\t\t\t$" << total << endl << endl;


	// set new purchase, calculate taxes, and the total.
	purchase = 85.00;

	postState = purchase * stateTax;
	postCounty = purchase * countyTax;

	total = postState + postCounty + purchase;

	// output the results
	cout << "Purchase:\t\t\t$" << purchase << "\nState Tax:\t\t\t$" << postState << "\nCounty Tax:\t\t\t$" << postCounty << "\nTotal:\t\t\t\t$" << total << endl << endl;


	// set new purchase, calculate taxes, and the total.
	purchase = 100.00;

	postState = purchase * stateTax;
	postCounty = purchase * countyTax;

	total = postState + postCounty + purchase;

	// output the results
	cout << "Purchase:\t\t\t$" << purchase << "\nState Tax:\t\t\t$" << postState << "\nCounty Tax:\t\t\t$" << postCounty << "\nTotal:\t\t\t\t$" << total << endl << endl;

	return 0;
}