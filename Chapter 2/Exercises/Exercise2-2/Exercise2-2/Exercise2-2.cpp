// Sales prediction accepts no arguments
// it calculates the midwest division income
// outputs the above

#include <iostream>
using namespace std;

int main()
{
	// create variables
	const float sales1 = 8.6, sales2 = 10.0;
	double output1, output2;
	double percent = .58;

	// calculate the outputs
	output1 = sales1 * percent, output2 = sales2 * percent;

	// output the total sales
	cout << "If total sales are " << sales1 << " million the Midwest division is estimated to generate $" << output1 << " million." << endl;
	cout << "If total sales are " << sales2 << " million the Midwest division is estimated to generate $" << output2 << " million." << endl;


	// return 0.
	return 0;
}