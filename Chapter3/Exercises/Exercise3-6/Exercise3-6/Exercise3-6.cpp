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
				butter = 1.50,
				flour = 2.75,
				cookies = 48.00;

	double requestedCookies, requiredSugar, requiredButter, requiredFlour, excessCookies;

	// get the amount of cookies
	cout << "Enter the number of cookies: ";
	cin >> requestedCookies;

	// calculate the multiplier
	excessCookies = fmod(requestedCookies, cookies) / cookies;

	requiredSugar = ((requestedCookies / cookies) * sugar) + (excessCookies * sugar);
	requiredButter = ((requestedCookies / cookies) + excessCookies) * butter;
	requiredFlour = ((requestedCookies / cookies) + excessCookies) * flour;

	// output the amount
	cout << "To make " << requestedCookies << " cookies, you will need:" << endl;
	cout << requiredSugar << " cups of sugar.";
	cout << requiredButter << " cups of butter.";
	cout << requiredFlour << " cups of flour.";

	return 0;
}