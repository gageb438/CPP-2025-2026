#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	/*
	Program3-14
	Accepts no arguments
	Outputs three variables containing the values
	intValue = 3928, doubleValue = 91.5, stringValue = "Prince Humperdink"
	*/
	
	int intValue = 3928;
	double doubleValue = 91.5;
	string stringValue = "Prince Humperdink";

	cout << "(" << setw(17) << intValue << ")" << endl;
	cout << "(" << setw(17) << doubleValue << ")" << endl;
	cout << "(" << stringValue << ")" << endl;

	return 0;
}