#include <iostream>
#include <iomanip>

using namespace std;

// global constants
const double PAY_RATE = 22.55;		// hourly pay rate
const double BASE_HOURS = 40.0;		// max non overtime hours
const double OT_MULTIPLIER = 1.5;	// overtime multiplier

// function prototypes
double getRadius();
double square(double);
int getCups();
int cupsToOunces(int);
void showIntro();
double hourGetter();
double payCalculator(double);

int main()
{
	int choice = 0;
	cout << "choice here: ";
	cin >> choice;

	switch (choice)
	{
	case(1):
	{
		/*
		##################################
		Main accepts no arguments
		It prompts the user for hte radius of a circle
		and calls getRadius() to take input for radius
		and assigns that input to the variable radius
		It calls square() to get the square of the radius
		using area = PI * square(radius)
		and outputs the area
		*/

		// set variables
		double radius,
			area,
			PI = 3.14;

		// get radius and calculate area
		radius = getRadius();
		area = PI * square(radius);

		// format and output.
		cout << fixed << showpoint << setprecision(2);
		cout << "The area of a circle with a radius of " << radius << " is: " << area;

		break;
	}
	case(2):
	{
		showIntro();
		int cups = getCups();
		int converted = cupsToOunces(cups);

		cout << cups << " cups converted to ounces is " << converted << "." << endl;
		break;
	}
	case(3):
	{
		double hours,
			overtime = 0.0,
			totalPay;

		hours = hourGetter();

		if (hours != NULL)
		{
			totalPay = payCalculator(hours);

			cout << "Your total pay is : " << fixed << showpoint << setprecision(2) << " $" <<  totalPay;
		}
		break;
	}
	}
	
}

/*
##################
getRadius accepts no arguments
it takes input from the user for the radius of a circle and returns the radius
*/
double getRadius()
{
	// take input
	double radius;
	cout << "Enter the radius of a circle: ";
	cin >> radius;
	
	// return
	return radius;
}

/*
################
square accepts an argument for number
it calculates and returns the square of the argument
*/
double square(double number)
{
	return pow(number, 2);
}

/*
getCups accepts no arguments
it prompts the user for the number of cups
to convert and returns cups
*/
int getCups()
{
	int cups;
	cout << "Enter the number of cups to convert: ";
	cin >> cups;

	return cups;
}

/*
cupsToOunces accepts the argument cups
it calculates and returns the conversion
from cups to fluid ounces
*/
int cupsToOunces(int cups)
{
	return cups * 8;
}

/*
showIntro accepts no arguments
it displays program information to the user
*/
void showIntro()
{
	cout << "This program converts a measurement into cups" << endl;
	cout << "to fluid ounces. For your reference the formula is:" << endl;
	cout << "1 cup = 8 fluid ounces." << endl << endl;
	return;
}

/*
HourGetter
takes input for the amount of hours worked in a week
*/
double hourGetter()
{
	double hours;
	cout << "Input the amount of hours you worked this week: ";
	cin >> hours;

	if (hours < BASE_HOURS)
	{
		cout << "You must've worked atleast " << BASE_HOURS << " hours.";
		return NULL;
	}

	return hours;
}

/*
PayCalc
Pay calculator accepts hours argument
it calculates the pay, assuming there is 
40 hours atleast.*/
double payCalculator(double hours)
{
	if (hours > BASE_HOURS)
	{
		return (BASE_HOURS * (PAY_RATE * OT_MULTIPLIER)) + ((hours - BASE_HOURS) * PAY_RATE);
	}
	else
	{
		return (BASE_HOURS * PAY_RATE);
	}
}

