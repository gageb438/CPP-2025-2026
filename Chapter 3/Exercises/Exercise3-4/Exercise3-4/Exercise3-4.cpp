#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/*
	Exercise 3-4
	A program that asks for 3 months, and the rainfall
	then finds the average and outputs it
	*/

	// intiialize variables
	string month1, month2, month3;
	double rain1, rain2, rain3, average;

	// ask for all the months and rainfall
	cout << "Enter a month to record rainfall for: ";
	cin >> month1;

	cout << "Enter the rainfall for " << month1 << ": ";
	cin >> rain1;

	cout << "Enter a month to record rainfall for: ";
	cin >> month2;

	cout << "Enter the rainfall for " << month2 << ": ";
	cin >> rain2;

	cout << "Enter a month to record rainfall for: ";
	cin >> month3;

	cout << "Enter the rainfall for " << month3 << ": ";
	cin >> rain3;

	average = (rain1 + rain2 + rain3) / 3;

	cout << "The average rainfall for the months of " << month1 << ", " << month2 << ", and " << month3 << " is: " << setprecision(2) << average << " inches of rain.";

	return 0;
}