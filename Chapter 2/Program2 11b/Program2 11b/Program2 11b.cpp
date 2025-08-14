#include <iostream>
using namespace std;

int main() {
	// program 2-11b
	// define integer variables
	//since they are the same type, they can be done seperately or all in the same line
	int floors, rooms, suites;

	// assign values to the variables
	floors = 25;
	rooms = 300;
	suites = 30;

	//output the message to the user
	cout << "The grande Hotel has " << floors << " floors" << endl;
	cout << "with " << rooms << " rooms and " << suites;
	cout << " suites." << endl;

	return 0;
}