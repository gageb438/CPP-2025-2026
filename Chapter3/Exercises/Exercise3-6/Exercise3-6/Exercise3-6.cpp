#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	/*
	Exercise 6
	Has a recipe that produces 48 cookies of ingridents and asks the user for the number of cookies
	then it displays the number of cups of each ingredient.
	*/


	// initialize variables
	const float sugar = 1.50,
				butter = 1.00,
				flour = 2.75,
				cookies = 48.00;

	double requestedCookies = 0.00, requiredSugar, requiredButter, requiredFlour, excessCookies;

	// get the amount of cookies
	cout << "Enter the number of cookies: ";
	cin >> requestedCookies;

	// calculate the multiplier
	requiredSugar = sugar * requestedCookies / cookies;
	requiredButter = butter * requestedCookies / cookies;
	requiredFlour = flour * requestedCookies / cookies;

	cout << "\nTo make 120 cookies, you will need:" << endl;
	cout << setprecision(3) << requiredSugar << " cups of sugar" << endl;
	cout << setprecision(3) << requiredButter << " cups of butter"<< endl;
	cout << setprecision(3) << requiredFlour << " cups of flour" << endl;

	return 0;
}