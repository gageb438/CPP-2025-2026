#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	// define variable for menu choice
	int choice = 0;

	// display the menu to the user
	cout << "Welcome to the Chapter 4 Exercise Menu" << endl;
	cout << "Please choose from the following choices:" << endl;
	cout << "1.\tExercise 4-11 - Math Tutor Revision" << endl;
	cout << "2.\tExercise 4-17 - Pole Vault Personal best" << endl;
	cout << "3.\tExercise 4-23 - Geometry Calculator" << endl;
	cout << "4.\tExercise 4-27 - WiFi Diagnostic" << endl;
	cout << "5.\tExercise 4-28 - Restaurant Selector" << endl;
	cout << "6.\tQuit" << endl;

	// get input from the user
	cout << ":> ";
	cin >> choice;
	cout << "------------------------------------" << endl;

	// validate input
	if (choice >= 1 && choice <= 6)
	{
		// process the menu
		if (choice == 1)
		{
			cout << "Exercise 4-11 - Math Tutor Revision" << endl << endl;

			// do program1 here.
		}
		else if (choice == 2)
		{
			cout << "Exercise 4-17 - Pole Vault Personal Best" << endl << endl;

			// ``
		}
		else if (choice == 3)
		{
			cout << "Exercise 4-23 - Gemometry Calculator" << endl << endl;

			// ``
		}
		else if (choice == 4)
		{
			cout << "Exercise 4-27 - WiFi Diagnostic" << endl << endl;

			// ``
		}
		else if (choice == 5)
		{
			cout << "Exercise 4-28 - Restaurant Selector" << endl << endl;
		}
		else
		{
			cout << "Thank you for using the Exercise Selection System." << endl << endl;
		}
	}
	// catch any input error
	else
	{
		cout << endl << endl << "Invalid choice, try again" << endl << endl;
	}
}