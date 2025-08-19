#include <iostream>

using namespace std;

// program 2-9 calculates the amount of memory used by 4 data types and outputs the information to the user

int main()
{
	// output the data types
	cout << "A char data type uses " << sizeof(char) << " byte(s) of memory." << endl;
	cout << "A int data type uses " << sizeof(int) << " byte(s) of memory." << endl;
	cout << "A float data type uses " << sizeof(float) << " byte(s) of memory." << endl;
	cout << "A double data type uses " << sizeof(double) << " byte(s) of memory." << endl;

	// return 0
	return 0;
}