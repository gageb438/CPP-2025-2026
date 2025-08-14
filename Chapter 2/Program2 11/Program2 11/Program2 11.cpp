#include <iostream>
using namespace std;

int main() {
	//program 2 - 11
	// define integer variables of different integer types
	int checking;
	unsigned int miles;
	long diameter;

	// asign literal values to the variables
	checking = -20;
	miles = 4276;
	diameter = 10000;

	//output messages to the user using the variables
	cout << "We have made a long journey of " << miles;
	cout << " miles." << endl;
	cout << "Our checking account balance is " << checking << endl;
	cout << "The galaxy is about " << diameter;
	cout << " light years in diameter." << endl;

	return 0;
}