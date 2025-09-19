#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	// define variable for menu choice
	int choice = 0;

	// display the menu to the user
	cout << "Welcome to the Chapter 5 Practices Menu" << endl;
	cout << "Please choose from the following choices:" << endl;
	cout << "1.\tPractice 1" << endl;
	cout << "2.\tPracitce 2" << endl;
	cout << "3.\tPractice 3" << endl;
	cout << "4.\tPractice 4" << endl;
	cout << "5.\tPractice 6" << endl;
	cout << "6.\tPractice 7" << endl;
	cout << "7.\tPractice 9" << endl;
	cout << "8.\tPractice 11" << endl;
	cout << "9.\tPractice 12" << endl;
	cout << "10.\tPractice 13" << endl;
	cout << "99.\tQuit" << endl;

	// get input from the user
	cout << ":> ";
	cin >> choice;
	cout << "------------------------------------" << endl;

	// validate input
	switch (choice)
	{
	case 1:
	{
		//5-1
		// initialize values
		int num = 5;

		// output the value in num
		cout << "The variable num has the value: " << num << endl;
		cout << "I will now increment the variable num." << endl << endl;

		// increment
		num++;
		cout << "The variable num now has the value: " << num << endl;
		cout << "I will now increment the variable num again." << endl << endl;

		// increment
		num++;
		cout << "The variable num now has the value: " << num << endl;
		cout << "I will de-increment the variable num again." << endl << endl;

		// de
		num--;
		cout << "The variable num now has the value: " << num << endl;
		cout << "I will de-increment the variable num again." << endl << endl;

		// de
		num--;
		cout << "The variable num now has the value: " << num << endl;
		break;
	}
	case 2:
	{
		//5-2
		// initialize variable
		int num = 4;

		cout << num << endl; //4
		cout << num++ << endl;//4, inc
		cout << num << endl;//5
		cout << ++num << endl;//inc, 6
		cout << endl;//blank
		cout << num << endl;//6
		cout << num-- << endl;//6, deinc
		cout << num << endl;//5
		cout << --num << endl;//de-inc, 4

		break;
	}
	case 3:
	{
		//5-3
		// intiialize
		int counter = 0;

		// loop while its less than 5;
		while (counter < 5) 
		{
			cout << "Hello there!" << endl;
			counter++;
		}

		break;
	}
	case 4:
	{
		//5-4
		// accepts no arguments
		// prompts the user for a temp and loops
		// if the temp is too high >102.5 the loop should continue
		// prompting the user to enter a temp. once the temperature is below max_temp, output a message to check again in 15 minutes.

		const float MAX_TEMP = 102.5;
		double temp;

		cout << "Enter the substance temperature in Celsius: ";
		cin >> temp;

		while (temp > MAX_TEMP)
		{
			
			cout << "The temperature is too high! Turn the thermostat down and check the temperature again in 5 minutes." << endl;

			cout << "Press any key to record the temp again.";
			cin.ignore();
			cin.get();

			cout << endl << "Enter the substance temperature in Celsius: ";
			cin >> temp;
		}

		// output a message to check the temp every 15 minutes
		cout << "The temperature is below the maximum allowed. Check again in 15 minutes." << endl << endl;

		break;
	}
	case 5:
	{
		//5-6
		/* accepts no arguments
		uses a counted while loop to find and output the square of numbers 1 through 10.
		*/

		const int MAX_NUMBER = 10;
		int counter = 1;

		cout << "Number\t\tNumber Squared" << endl;
		cout << "---------------------------------" << endl;

		while (counter <= MAX_NUMBER)
		{
			cout << counter << "\t\t" << counter * counter  << endl;
			counter++;
		}
		break;
	}
	case 6:
	{
		//5-7
		// intialize variable
		int choice = 0; // prime loop
		while (choice != 5) // continue looping until the user enters 5
		{
			do //validate the menu choice
			{
				cout << "\nWelcome to the Coffee Kraze Kiosk." << endl;
				cout << "Please make a selection from the options below:" << endl;
				cout << "1. Coffee ala Americana" << endl;
				cout << "2. Caramel Machiato" << endl;
				cout << "3. Mocha Frappe" << endl;
				cout << "4. Cappuccino" << endl;
				cout << "5. Quit" << endl;
				cout << "Enter your selection: >";
				cin >> choice;
			} while (choice < 1 || choice > 5);

			// proccess the choice
			switch (choice)
			{
			case 1:
			{
				cout << "Here is your Coffee ala Americana. Enjoy!" << endl;

				break;
			}
			case 2:
			{
				cout << "Here is your Caramle Machiato. Enjoy!" << endl;

				break;
			}
			case 3:
			{
				cout << "Here is your Mocha Frappe. Enjoy!" << endl;

				break;
			}
			case 4:
			{
				cout << "Here is your Cappuccino. Enjoy!" << endl;

				break;
			}
			case 5:
			{
				cout << "Thank you for stopping by. Have a groovy day!" << endl;

				break;
			}
			}
		}
	}
	case 7:
	{
		//5-9

		const int MAX_VALUE = 10;
		int counter;

		cout << "Number\t\tNumber Squared" << endl;
		cout << "-----------------------------------";

		for (counter = 0; counter <= MAX_VALUE; counter++)
		{
			cout << counter << "\t\t" << pow(counter, 2) << endl;
		}

		break;
	}
	case 8:
	{
		// consts
		const int KPH_MIN = 60, KPH_MAX = 130, INCREMENT = 10;
		const double CONV = 0.6214;

		// init variables
		int kph;
		double mph;

		// header
		cout << "KPH\t\tMPH" << endl;
		cout << "_________________________" << endl;
		cout << fixed << showpoint << setprecision(2);

		// loop
		for (kph = KPH_MIN; kph <= KPH_MAX; kph += INCREMENT)
		{
			mph = kph * CONV;
			cout << kph << "\t\t" << mph << endl;
		}

		break;
	}
	case 9:
	{
		//5-12
		/*
		Accepts no arguments
		Uses a user-controlled loop to input and accumulate
		a total number of sales for the number of days
		specified by the user and outputs the total.
		*/

		int needed_days = 0,
			current_day = 1;

		double sales, total = 0;

		cout << "How many days do you want to enter sales for? : ";
		cin >> needed_days;

		for (current_day; current_day <= needed_days; current_day++)
		{
			cout << "Enter the sales for day " << current_day << ": ";
			cin >> sales;
			total += sales;
		}

		cout << fixed << showpoint << setprecision(2);
		cout << "The total sales for " << needed_days << " days is: $" << total << endl;

		break;
	}
	case 10:
	{

	}
	case 99:
	{
		cout << "Quitting...";
		break;
	}
	default:
		cout << "Invalid menu choice.";
	}
}