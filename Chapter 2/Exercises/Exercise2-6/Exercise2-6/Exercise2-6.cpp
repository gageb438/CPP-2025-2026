#include <iostream>

using namespace std;

// exercise 2-6 calculates employees total annual pay and outputs to the user

int main()
{
	// set variables
	const double payAmount = 2200.0;
	const int payPeriods = 26;
	double annualPay;

	// calculate annual pay
	annualPay = payAmount * payPeriods;

	// output annual pay
	cout << "With a pay amount of $" << payAmount << " with " << payPeriods << " pay periods. The employee will have an annual pay of $" << annualPay << endl;

	// return 0
	return 0;
}