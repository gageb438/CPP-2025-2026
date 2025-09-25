#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>
#include <vector>
#include <fstream>

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
		cout << "2.\tExercise 5 - 24" << endl;
		cout << "3.\tExercise 5 - 23" << endl;
		cout << "4.\tExercise 5 - 26" << endl;
		cout << "5.\tExercise 5 - 27" << endl;
		cout << "6.\tQuit" << endl;

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
				// validate first
				while (choice > MAX_NUMBER or choice < MIN_NUMBER)
				{
					cout << "Invalid choice." << endl;
					cout << "Guess again: ";
					cin >> choice;
				}

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
			cout << "Exercise 5 - 24" << endl;

			/*
			Exercise 5-24
			Reads through random.txt, counts the number of numbers
			counts the sum, and calculates the average
			while also finding minimum and maximum value
			It then outputs this all to the user
			*/

			// intiialize
			int num = 0,
				min = 99999999999,
				max = 0;

			// for division later, had to set them as a float.
			double avg,
				total = 0.0,
				counter = 0.0;
			ifstream outFile;

			// open file
			outFile.open("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Data Files\\Random.txt");

			// if the file exists
			if (!outFile) // file doesnt exist.
			{
				cout << "File not found." << endl;
				break;
			}
			else // file exists.
			{
				cout << "File found." << endl;
				// while theres lines in the file
				while (outFile >> num)
				{
					// add to the total and up the counter by 1.
					total += num;
					counter++;

					// check if it is the new max or min
					// and replace if needed.
					if (num > max)
					{
						max = num;
					}

					if (num < min)
					{
						min = num;
					}
				}

				// calculate the average
				avg = total / counter;

				// output everything.
				cout << "Number of numbers: " << num << endl;
				cout << "Sum of the numbers: " << total << endl;
				cout << "Average of the numbers: " << avg << endl;
				cout << "Minimum value: " << min << endl;
				cout << "Maximum value: " << max << endl;

				outFile.close();
				break;
			}
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
			cout << "Exercise 5 - 24" << endl;

			/*
			5-24
			takes input for a name,
			a sentence about the user,
			and then makes a webpage,
			then takes input for the name of the file,
			then writes to the file,
			and outputs the success message.
			*/

			// initialize
			string name,
				bio,
				filename;

			// collect the data
			cout << "Enter your name: ";
			cin.ignore();
			getline(cin, name);
			
			cout << "Enter a sentence about yourself: ";
			getline(cin, bio);

			// get the file name
			cout << "Enter the name of the file (with .html): ";
			getline(cin, filename);

			// open the file
			ofstream outFile;
			outFile.open(filename);

			// write the html
			outFile << "<html>" << endl;
			outFile << "<head>" << endl;
			outFile << "</head>" << endl;
			outFile << "<body>" << endl;
			outFile << "\t<center>" << endl;
			outFile << "\t\t<h1>" << name << "</h1>" << endl;
			outFile << "\t</center>" << endl;
			outFile << "\t<hr />" << endl;
			outFile << "\t" << bio << endl;
			outFile << "\t<hr />" << endl;
			outFile << "</body>" << endl;
			outFile << "</html>" << endl;

			// close the file
			outFile.close();

			// output success
			cout << "Success!";

			break;
		}
		case 5:
		{
			cout << "Exercise 5 - 27" << endl;

			/*
			exercise 5-27
			reads through steps.txt
			calculating the amount of value each month
			and then outputs it to the user.
			*/

			// initialize variables
			const string MONTHS[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
			const int DAYS[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			int step, monthc = 0;
			double total = 0.0, days = 0.0;

			ifstream infile;
			infile.open("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Data Files\\steps.txt");
			
			if (!infile)
			{
				cout << "File not found. " << endl;
				break;
			}
			else
			{
				// opens the month
				for (int month : DAYS)
				{
					days = month;

					// loops and removes each day from the months counter
					while (days != 0)
					{
						infile >> step;
						total += step;
						days--;
					}

					// output the month
					cout << MONTHS[monthc] << " : " << total / month << endl;
					monthc++;
					total = 0;
					step = 0;
				}
			}

		break;
		}
		case 6:
		{
			cout << "Quitting..." << endl;
			break;
		}
		}
	} while (choice != 6);
}