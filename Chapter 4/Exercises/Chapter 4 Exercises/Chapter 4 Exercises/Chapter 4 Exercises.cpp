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
	switch (choice)
	{
	case 1:
	{
		cout << "Exercise 4-11 - Math Tutor Revision" << endl << endl;

		/*
		Exercise 3-17
		Generates a random number from 1-500
		adds them together
		and displays the answer
		*/

		// give a seed and create variables
		unsigned int seed = time(0);
		srand(seed);

		int maxNum = 500,
			minNum = 1,
			num1 = (rand() % (maxNum - minNum + 1)) + minNum,
			num2 = (rand() % (maxNum - minNum + 1)) + minNum,
			output = num1 + num2,
			answer = 0,
			correct_answer = num1 + num2;

		// output the math problem
		cout << "  " << num1 << endl;
		cout << "+ " << num2 << endl;
		cout << "------" << endl;

		// take input for the answer
		cout << endl << "Input your answer here :> ";
		cin >> answer;

		if (answer == correct_answer)
		{
			cout << "Your answer was correct.";
		}
		else
		{
			cout << "Your answer was incorrect.";
			// output the answer and problem again/
			cout << "\n  " << num1 << endl;
			cout << "+ " << num2 << endl;
			cout << "------" << endl;
			cout << "  " << output << endl;
		}
		break;
	}
	case 2:
	{
		cout << "Exercise 4-17 - Personal Best" << endl << endl;

		/*
		4-17 asks for the name of a pole vaulter, the dates, and the height in meters of the athletes 3 best vaults
		It then reports in order of height, best first, the date on which each vault was made
		outputs ^
		*/

		// intiialize variables
		string name,
			vault1date,
			vault2date,
			vault3date;

		double vault1height,
			vault2height,
			vault3height;
		// take input
		cin.ignore();
		cout << "Enter the pole vaulter's name: ";
		getline(cin, name);

		cout << "Enter the date of the first pole vault: ";
		getline(cin, vault1date);

		cout << "Enter the height of the first pole vault: ";
		cin >> vault1height;

		cin.ignore();
		cout << "Enter the date of the second pole vault: ";
		getline(cin, vault2date);

		cout << "Enter the height of the second pole vault: ";
		cin >> vault2height;

		cin.ignore();
		cout << "Enter the date of the third pole vault: ";
		getline(cin, vault3date);

		cout << "Enter the height of the third pole vault: ";
		cin >> vault3height;

		// calculate and output.
		if (!(vault1height >= 2 && vault1height <= 5 && vault2height >= 2 && vault2height <= 5 && vault3height >= 2 && vault3height <= 5))
		{
			cout << "All pole vault heights must be greater than or equal to 2 and less than or equal to 5.";

			return 0;
		}
		else
		{
			if (vault1height >= vault2height && vault2height >= vault3height)
			{
				cout << "The best vault took place on " << vault1date << " with a height of " << vault1height << endl;
				cout << "The 2nd best vault took place on " << vault2date << " with a height of " << vault2height << endl;
				cout << "The 3rd best vault took place on " << vault3date << " with a height of " << vault3height << endl;
			}
			else if (vault1height >= vault2height && vault2height <= vault3height)
			{
				cout << "The best vault took place on " << vault1date << " with a height of " << vault1height << endl;
				cout << "The 2nd best vault took place on " << vault3date << " with a height of " << vault3height << endl;
				cout << "The 3rd best vault took place on " << vault2date << " with a height of " << vault2height << endl;
			}
			else if (vault2height >= vault1height && vault1height >= vault3height)
			{
				cout << "The best vault took place on " << vault2date << " with a height of " << vault2height << endl;
				cout << "The 2nd best vault took place on " << vault1date << " with a height of " << vault1height << endl;
				cout << "The 3rd best vault took place on " << vault3date << " with a height of " << vault3height << endl;
			}
			else if (vault2height >= vault3height && vault3height >= vault1height)
			{
				cout << "The best vault took place on " << vault2date << " with a height of " << vault2height << endl;
				cout << "The 2nd best vault took place on " << vault3date << " with a height of " << vault3height << endl;
				cout << "The 3rd best vault took place on " << vault1date << " with a height of " << vault1height << endl;
			}
			else if (vault3height >= vault2height && vault2height >= vault1height)
			{
				cout << "The best vault took place on " << vault3date << " with a height of " << vault3height << endl;
				cout << "The 2nd best vault took place on " << vault2date << " with a height of " << vault2height << endl;
				cout << "The 3rd best vault took place on " << vault1date << " with a height of " << vault1height << endl;
			}
			else if (vault3height >= vault1height && vault1height >= vault2height)
			{
				cout << "The best vault took place on " << vault3date << " with a height of " << vault3height << endl;
				cout << "The 2nd best vault took place on " << vault1date << " with a height of " << vault1height << endl;
				cout << "The 3rd best vault took place on " << vault2date << " with a height of " << vault2height << endl;
			}
			else
			{
				cout << "Error! All heights must be numbers.";
			}
			break;
		}
	}
	case 3:
	{
		/*
		Exercise 23 displays 3 options.
		It calculates the area for circle ,rectangle, and triangle
		it then outputs the answer
		*/

		int choice;

		cout << "1. Calculate the Area of a Circle" << endl;
		cout << "2. Calculate the Area of a Rectangle" << endl;
		cout << "3. Calculate the Area of a Triangle" << endl;
		cout << "4. Quit." << endl;
		cout << "Enter your choice (1 - 4): ";

		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			// intiialize variables
			float radius,
				area;

			const float pi = 3.14;

			// take input and validate
			cout << "Enter the circle's radius: ";
			cin >> radius;

			if (radius <= 0)
			{
				cout << "The radius must not be less than or equal to 0.";
				break;
			}

			// calculate and output
			area = pi * pow(radius, 2);

			cout << "The area is " << area << endl;
			break;
		}
		case 2:
		{
			// intiailize variables
			int length,
				width,
				area;

			// output and take input
			cout << "Enter the rectangle's length: ";
			cin >> length;
			cout << "Enter the rectangle's width: ";
			cin >> width;

			// validate
			if (length <= 0 || width <= 0)
			{
				cout << "Length and width must not be less than or equal to 0.";
				break;
			}

			// calculate
			area = width * length;

			// output
			cout << "The area is " << area;

			break;
		}
		case 3:
		{
			// initialize variables
			float base,
				height,
				area;

			// output and take input
			cout << "Enter the triangle's base: ";
			cin >> base;
			cout << "Enter the triangle's height: ";
			cin >> height;

			// validate
			if (base <= 0 || height <= 0)
			{
				cout << "Base and height must not be less than or equal to 0.";
				break;
			}

			// calculate

			area = .5 * base * height;
			// output
			cout << "The area is " << area;
		}
		default: cout << "Invalid menu choice.";
		}

		break;
	case 4:
	{
		/*
		Diagnostic tree asks users for the fixes to their wifi
		and runs through an if then tree and else.
		and outputs how to fix it.
		*/

		char choice;

		cout << "Reboot Computer and try to connect" << endl;
		cout << "Did that fix the problem?" << endl << ":> ";
		cin.get(choice);

		if (choice == 'n' or choice == 'N')
		{

		}
	}
	}
	default: cout << "Invalid menu choice.";
	}
}