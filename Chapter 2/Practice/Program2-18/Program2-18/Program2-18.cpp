#include <iostream>

using namespace std;

int main() {
	// program 2-18
	// use the sizeof() function to return the size of integers, longs, and doubles

	// define the variable apples
	long double apples;

	cout << "The size of an integer is " << sizeof(int) << " bytes." << endl;
	cout << "The size of a long integer is " << sizeof(long) << " bytes." << endl;
	cout << "An apple can be eatin in " << sizeof(apples) << " bytes." << endl;

	return 0;
}