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
	cout << "1.\Practice 4-2" << endl;
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
			cout << "Practice 4-2" << endl << endl;

			/*
			Accepts no arguments
			Prompts the user for three test scores to average if the average is higher than the high score constant
			of 95, display a congratulations message
			*/

			// create base variables
			float score1 = 0, score2 = 0, score3 = 0, average = 0;

			cout << "Enter three test scores, seperated by a space and I will average them: ";
			cin >> score1, score2, score3;

			average = (score1 + score2 + score3) / 3;

			cout << endl << "Your average is " << average << endl;
			
			return 0;
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