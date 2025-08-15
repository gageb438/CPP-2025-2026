#include <iostream>

using namespace std;

int main() {
	//program 2-22
	//program 2-22 calculates the total amount of pay that will be contributed to a retirement plan if
	// 5%, 7%, or 10% of a monthly pay is withheld with a monthly pay of $6000.

	double monthlyPay = 6000, rate1 = .05, rate2 = .07, rate3 = .1, pay1, pay2, pay3;

	// calculate all payment per month
	pay1 = monthlyPay * rate1;
	pay2 = monthlyPay * rate2;
	pay3 = monthlyPay * rate3;

	cout << "Your contribution at " << rate1 * 100 << "% is $" << pay1 << " per month." << endl;
	cout << "Your contribution at " << rate2 * 100 << "% is $" << pay2 << " per month." << endl;
	cout << "Your contribution at " << rate3 * 100 << "% is $" << pay3 << " per month." << endl;

	return 0;
}