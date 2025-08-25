#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	Program3-18
	Accepts no arguments
	Takes input from the user in the form of a first and last name
	and the city they live in and outputs a summary.
	*/

	// define variables
	string name, city;

	// take input from the user
	cout << "Enter your first and last name: ";
	getline(cin, name);
	cout << "Enter the city you live in: ";
	getline(cin, city);

	// output a summary
	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;

	return 0;
}