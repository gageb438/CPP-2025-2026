#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	// define choice 
	int choice = 0;

	do
	{
		// display the menu to the user
		cout << "Welcome to the Chapter 5 Exercise Menu" << endl;
		cout << "Please choose from the following choices:" << endl;
		cout << "1.\tExercise 5 - 20" << endl;
		cout << "3.\tExercise 5 - 23" << endl;
		cout << "2.\tQuit" << endl;

		// get input from the user
		cout << ":> ";
		cin >> choice;
		cout << "------------------------------------" << endl;

		// switch
		switch (choice)
		{
		case 1:
		{
			cout << "Exercise 5 - 20" << endl;

			/*
			5-20
			number guessing game, loops until
			user guesses correct number
			and outputs high or low if it is
			too high or too low.
			*/

			// intiialize
			// and seed
			const unsigned int seed = time(0);
			srand(seed);

			const int MAX_NUMBER = 1000,
				MIN_NUMBER = 1,
				NUMBER = (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;

			int choice = 0,
				turns = 0;

			do
			{
				// add to the turns
				turns += 1;

				// take input
				cout << "Can you guess what it is? : ";
				cin >> choice;

				// evaluate
				if (choice < NUMBER)
				{
					cout << "Too low, try again." << endl;
				}
				else if (choice > NUMBER)
				{
					cout << "Too high, try again." << endl;
				}
				else
				{
					cout << "Congratulations! You guessed it!" << endl;
					cout << "I was thinking of the number " << NUMBER << endl;
					cout << "You successfully guessed the number in " << turns << " turns." << endl;
				}
			} while (choice != NUMBER);

			break;
		}
		case 2:
		{
			cout << "Exercise # - ##";

			// code.

			break;
		}
		case 3:
		{
			cout << "Exercise 5 - 23" << endl;

			int star_counter = 1;
			
			for (star_counter; star_counter <= 10; star_counter++)
			{
				for (int count2 = star_counter; count2 != 0; count2--)
				{
					cout << "*";
				}
				cout << endl;
			}

			for (star_counter; star_counter != 0; star_counter--)
			{
				for (int count2 = star_counter; count2 != 0; count2--)
				{
					cout << "*";
				}
				cout << endl;
			}

			break;
		}
		case 4:
		{
			cout << "Exercise # - ##";

			// code.

			break;
		}
		case 5:
		{
			cout << "Exercise # - ##";

			// code.

			break;
		}
		case 6:
		{
			cout << "Exercise # - ##";

			// code.

			break;
		}
		}
	} while (choice < 1 || choice > 2);
}