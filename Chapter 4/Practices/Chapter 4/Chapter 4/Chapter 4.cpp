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
	cout << "1.\tPractice 4-2" << endl;
	cout << "2.\tPractice 4-3" << endl;
	cout << "3.\tPractice 4-6" << endl;
	cout << "4.\tPractice 4-8" << endl;
	cout << "5.\tPractice 4-9" << endl;
	cout << "6.\tPractice 4-10" << endl;
	cout << "7.\tPractice 4-14" << endl;
	cout << "8.\tPractice 4-18" << endl;
	cout << "9.\tPractice 4-19" << endl;
	cout << "99.\tQuit" << endl;

	// get input from the user
	cout << ":> ";
	cin >> choice;
	cout << "------------------------------------" << endl;

	// validate input
	if (choice >= 1 && choice <= 99)
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
float score1 = 0, score2 = 0, score3 = 0, average = 0, highScore = 95.0;

cout << "Enter three test scores, seperated by a space and I will average them: ";
cin >> score1 >> score2 >> score3;

average = (score1 + score2 + score3) / 3;

cout << endl << "Your average is " << average << endl;

if (average > highScore)
{
	cout << "Congratulations! Thats a new high score!" << endl;
}

return 0;
		}
		else if (choice == 2)
		{
			cout << "Practice 4-3" << endl << endl;

			/*
			Program 4-4
			Demonstrates how float rounding can
			cause quality errors
			*/

			// define variables
			double a = 1.5, b = 1.5;

			a += 0.00000000000000000001; // add to variable a
			if (a == b)
			{
				cout << "Both a and be are the same!" << endl;
			}
			else
			{
				cout << "a and be are not the same!" << endl;
			}
		}
		else if (choice == 3)
		{
			cout << "Practice 4-2" << endl << endl;

			/*
			Accepts no arguments
			Prompts the user for three test scores to average if the average is higher than the high score constant
			of 95, display a congratulations message
			*/

			// create base variables
			float score1 = 0, score2 = 0, score3 = 0, average = 0, highScore = 95.0;

			cout << "Enter three test scores, seperated by a space and I will average them: ";
			cin >> score1 >> score2 >> score3;

			average = (score1 + score2 + score3) / 3;

			cout << endl << "Your average is " << average << endl;

			if (average > highScore)
			{
				cout << "Congratulations! Thats a new high score!" << endl;
				cout << "Great job!" << endl; // if statements iwht more than 1 line need curley braces
			}

			return 0;
		}
		else if (choice == 4)
		{
			cout << "Practice 4-8" << endl << endl;

			/*
			Program 4-8
			accepts no arguments
			prompts the user for an odd or even integer
			and outputs if it is odd or even
			*/

			int number = 0;

			cout << "Enter an integer and I will tell you if it is odd or even.";
			cin >> number;

			if (number % 2 == 0)
			{
				cout << number << " is an even number." << endl;
			}
			else
			{
				cout << number << " is an odd number." << endl;
			}

			return 0;
		}
		else if (choice == 5)
		{
			cout << "Practice 4-9" << endl << endl;

			/*
			Program 4-8
			accepts no arguments
			prompts the user for two numbers to divide
			and checks to make sure the divisor is NOT a value of 0
			and either outputs an error message or the calculated quotient
			*/

			float num1, num2, output;

			cout << "Enter a number: ";
			cin >> num1;

			cout << "Enter another number: ";
			cin >> num2;

			if (num1 == 0 or num2 == 0)
			{
				cout << "ERROR: Cannot divide by 0!" << endl;
			}
			else
			{
				output = num1 / num2;
				cout << num1 << "/" << num2 << "=" << output << endl;
			}

			return 0;
			}
		else if (choice == 6)
		{
			/*
			Program 4-10
			Accepts no arguments
			It prompts the user with questions for loan requiremeents
			and uses nested if statements to determine eligibility
			then outputs a message that the user qualifes
			or why the user doesnt qualify for the special rate
			*/

			// define variables
			char employed, // currently employed (y/n)
				recentGrad; // recent graduate (y/n)

			// prompt the user with questions for eligibility
			cout << "Answer the following questions with either" << endl << "Y for yes or N for no." << endl;
			cout << "Are you currently employed?" << endl << "> ";
			cin >> employed;
			cout << "Have you graduated from college in the past two years?" << endl << "> ";
			cin >> recentGrad;

			if (employed == 'Y' or employed == 'y')
			{
				if (recentGrad == 'Y' or recentGrad == 'y')
				{
					cout << "You qualify for the special interest rate.";
				}
				else
				{
					cout << "You must have graduated from college in the past two years to qualify.";
				}
			}
			else
			{
				cout << "You must be employed to qualify.";
			}

			return 0;
			}
		else if (choice == 7)
		{
			cout << "Practice 4-14" << endl;

			/*
			Program 4-14 accepts no arguments
			It takes input from the user for a grade percent as an integer
			and outputs the letter grade
			a trailing else catches any other inputs*/

			int testingPercent;
			const int A_SCORE = 90,
				B_SCORE = 80,
				C_SCORE = 70,
				D_SCORE = 60,
				F_SCORE = 0;

			cout << "Enter a grade percent." << endl << ": ";
			cin >> testingPercent;

			if (testingPercent >= A_SCORE)
			{
				cout << "You got a A.";
			}
			else if (testingPercent >= B_SCORE)
			{
				cout << "You got a B.";
			}
			else if (testingPercent >= C_SCORE)
			{
				cout << "You got a C.";
			}
			else if (testingPercent >= D_SCORE)
			{
				cout << "You got a D.";
			}
			else if (testingPercent >= F_SCORE)
			{
				cout << "You got a F.";
			}
			else
			{
				cout << "Invalid input.";
			}

			return 0;
			}
		else if (choice == 8)
		{
			/*
			Program 4-1
			Accepts no arguments
			Presents the user with the menu:
			Health Club Membership Menu
			1. Standard Adult Membership
			2. Child Membership
			3. Senior Citizen Membership
			4. Quit Program
			Enter your choice:
			it prompts the user for the # of months and calculates fees
			Adult = 40.0, Senior = 30.0, Child = 20.0 (Per month)
			*/

			// set the variables
			const float Adult = 40.0,
				Senior = 30.0,
				Child = 20.0;

			int months = 0, choice = 0;
			double fees = 0.0;

			// print the menu
			cout << "Health Club Membership Menu" << endl;
			cout << "1. Standard Adult Membership" << endl;
			cout << "2. Child Membership" << endl;
			cout << "3. Senior Citizen Membership" << endl;
			cout << "4. Quit the Program" << endl;
			cout << "Enter your choice: ";

			cin >> choice;

			if (choice >= 1 && choice <= 4)
			{
				cout << "For how many months?\n:> ";
				cin >> months;

				if (choice == 1)
				{
					fees = Adult * months;
				}
				else if (choice == 2)
				{
					fees = Child * months;
				}
				else if (choice == 3)
				{
					fees = Senior * months;
				}
				else
				{
					cout << "Thank you for visiting member services. Have a great day!";
					return 0;
				}

				cout << "Your total membership fees are: $" << setw(4) << fees << endl;

				return 0;
			}
			else
			{
				cout << "Invalid choice. Only enter values 1-4.";
				return 0;
			}
			}
		else if (choice == 9)
		{
			cout << "Practice 4-19" << endl;

			/*
			Program 4-19 accepts no arguments
			It takes input from the user for a grade percent as an integer
			and outputs the letter grade
			a trailing else catches any other inputs*/

			int testingPercent;
			const int A_SCORE = 90,
				B_SCORE = 80,
				C_SCORE = 70,
				D_SCORE = 60,
				F_SCORE = 0;

			cout << "Enter a grade percent." << endl << ": ";
			cin >> testingPercent;

			if (testingPercent < 0 || testingPercent > 100)
			{
				cout << "Only enter numbers from 0-100!.";
				return 0;
			}

			if (testingPercent >= A_SCORE)
			{
				cout << "You got a A.";
			}
			else if (testingPercent >= B_SCORE)
			{
				cout << "You got a B.";
			}
			else if (testingPercent >= C_SCORE)
			{
				cout << "You got a C.";
			}
			else if (testingPercent >= D_SCORE)
			{
				cout << "You got a D.";
			}
			else if (testingPercent >= F_SCORE)
			{
				cout << "You got a F.";
			}
			else
			{
				cout << "Invalid input.";
			}

			return 0;
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