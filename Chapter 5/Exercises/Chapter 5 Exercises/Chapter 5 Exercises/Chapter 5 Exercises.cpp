#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>
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
			float day = 0,
				steps = 0,
				january = 0,
				february = 0,
				march = 0,
				april = 0,
				may = 0,
				june = 0,
				july = 0,
				august = 0,
				september = 0,
				october = 0,
				november = 0,
				december = 0;
			
			string currentMonth = "jan";

			ifstream infile;
			infile.open("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Data Files\\steps.txt");
			
			if (!infile)
			{
				cout << "File not found. " << endl;
				break;
			}
			else
			{	
				while (infile >> steps)
				{
					if (currentMonth == "jan")
					{
						if (day != 31)
						{
							// add steps to january
							january += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							february += steps;
							day = 1;
							currentMonth = "feb";
						}
					}
					else if (currentMonth == "feb")
					{
						if (day != 28)
						{
							// add steps to february
							february += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							march += steps;
							day = 1;
							currentMonth = "mar";
						}
					}
					else if (currentMonth == "mar")
					{
						if (day != 31)
						{
							// add steps to march
							march += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							april += steps;
							day = 1;
							currentMonth = "apr";
						}
					}
					else if (currentMonth == "apr")
					{
						if (day != 30)
						{
							// add steps to april
							april += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							may += steps;
							day = 1;
							currentMonth = "may";
						}
					}
					else if (currentMonth == "may")
					{
						if (day != 31)
						{
							// add steps to may
							may += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							june += steps;
							day = 1;
							currentMonth = "jun";
						}
					}
					else if (currentMonth == "jun")
					{
						if (day != 30)
						{
							// add steps to june
							may += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							july += steps;
							day = 1;
							currentMonth = "jul";
						}
					}
					else if (currentMonth == "jul")
					{
						if (day != 31)
						{
							// add steps to july
							july += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							august += steps;
							day = 1;
							currentMonth = "aug";
						}
					}
					else if (currentMonth == "aug")
					{
						if (day != 31)
						{
							// add steps to august
							august += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							september += steps;
							day = 1;
							currentMonth = "sep";
						}
					}
					else if (currentMonth == "sep")
					{
						if (day != 30)
						{
							// add steps to september
							september += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							october += steps;
							day = 1;
							currentMonth = "oct";
						}
					}
					else if (currentMonth == "oct")
					{
						if (day != 31)
						{
							// add steps to october
							october += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							november += steps;
							day = 1;
							currentMonth = "nov";
						}
					}
					else if (currentMonth == "nov")
					{
						if (day != 30)
						{
							// add steps to november
							november += steps;
							// increase day counter by 1
							day++;
						}
						else
						{
							december += steps;
							day = 1;
							currentMonth = "dec";
						}
					}
					else if (currentMonth == "dec")
					{
						if (day != 31)
						{
							// add steps to december
							december += steps;
							// increase day counter by 1
							day++;
						}
					}
					else
					{
						cout << "Error" << endl;
					}
				}

				// output the totals
				cout << "January : " << january / 31 << endl;
				cout << "February : " << february / 28<< endl;
				cout << "March : " << march / 31 << endl;
				cout << "April : " << april /30 << endl;
				cout << "May : " << may / 31 << endl;
				cout << "June : " << june / 30 << endl;
				cout << "July : " << july / 31<< endl;
				cout << "August : " << august / 31 << endl;
				cout << "September : " << september / 30 << endl;
				cout << "October : " << october / 31 << endl;
				cout << "November : " << november / 30 << endl;
				cout << "December : " << december / 31 << endl;
			}
			break;
		}
		case 6:
		{
			cout << "Quitting..." << endl;
			break;
		}
		}
	} while (choice < 1 || choice > 6);
}