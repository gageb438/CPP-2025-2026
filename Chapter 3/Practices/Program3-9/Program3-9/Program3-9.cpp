#include <iostream>

using namespace std;

int main()
{
	/*
	Program 3-8
	accepts no arguments
	demonstrates type casting to prevent integer division
	*/

	// define variables
	int books; // number of books read
	int months; // number of months spent reading
	double perMonth; // average number of books per month

	// take input from the user
	cout << "How many books do you play to read? ";
	cin >> books;

	cout << "How many months will it take you to read them? ";
	cin >> months;

	// perform calculations and output results
	perMonth = static_cast<double>(books) / months;
	cout << "You will need to read " << perMonth << " books per month." << endl;

	return 0;
}