#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// function prototypes
void sevOneRe();
void sevThree();
void fileRead();
void sevEight();
void sevenNine();
void sevenTen();
void sevenTwelve();
void sevenFifteen();
void showValue(int element);
void sevenSixteen();
void sevenSeventeen();
void showAllValues(int values[], int size);
void sevenEighteen();
void getScores(int scores[], int size);
double getTotal(int score[], int size);
double getLowest(int scores[], int size);
void sevenTwentyOne();


int main()
{
	//sevOneRe();
	//sevThree();
	//fileRead();
	//sevEight();
	//sevenNine();
	//sevenTen();
	//sevenTwelve();
	//sevenFifteen();
	//sevenSixteen();
	//sevenEighteen();
	sevenTwentyOne();

	return 0;
}

void sevOneRe()
{
	const int NUM_EMPLOYEES = 6;
	int HOURS[NUM_EMPLOYEES];

	for(int count = 0; count < NUM_EMPLOYEES; count++)
	{
		cout << "Enter hours worked by employee " << (count + 1) << ": ";
		cin >> HOURS[count];
	}

	cout << "Here are the hours you entered: ";

	for (int count = 0; count < NUM_EMPLOYEES; count++)
	{
		cout << HOURS[count] << " ";
	}

	cout << endl;
}

void sevThree()
{
	const int MONTHS = 12;
	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int count = 0; count < MONTHS; count++)
	{
		cout << "Month " << count + 1 << " has " << days[count] << " days." << endl;
	}
}

void fileRead()
{
	const int SIZE = 10;
	int numbers[SIZE];
	int count = 0;
	ifstream inFile("numbersdemo.txt");

	if (!inFile)
	{
		cout << "File not found." << endl;
		return;
	}
	else
	{
		// read the numbers from the file into the array
		while (count < SIZE && inFile >> numbers[count])
		{
			count++;
		}

		cout << count << " numbers were read from the file." << endl;
		inFile.close();

		// display the array contents
		cout << "The numbers in the file are: ";
		count = 0;
		while (count < SIZE)
		{
			cout << numbers[count] << " ";
			count++;
		}

		cout << endl;
	}
}

void sevEight()
{
	// init
	const int SIZE = 10;
	int numbers[SIZE];
	int count;
	ofstream outFile("prog7_8demo.txt");

	for (count = 0; count < SIZE; count++)
	{
		numbers[count] = count;
	}
	if (!outFile)
	{
		cout << "File could not be opened." << endl;
	}
	else
	{
		for (count = 0; count < SIZE; count++)
		{
			outFile << numbers[count] << endl;
		}
	}

	// close file
	outFile.close();
	cout << "All data written to progr7_8demo.txt" << endl;
}

void sevenNine()
{
	// init
	const int SIZE = 3;
	int numbers[SIZE];
	int count;

	cout << "Storing 5 values in an array of 3 elements." << endl;
	/*
	for (count = 0; count < 5; count++)
	{
		numbers[count] = count;
	}
	
	cout << "If the program is still running, output the array." << endl;

	for (count = 0; count < 5; count++)
	{
		cout << numbers[count] << endl;
	}
	*/

	cout << "Done!" << endl;
}

void sevenTen()
{
	// init
	int numbers[] = { 10,20,30,40,50 };

	for (int value : numbers)
	{
		cout << value << endl;
	}
}

void sevenTwelve()
{
	const int SIZE = 5;
	int numbers[5];

	for (int& value : numbers)
	{
		cout << "Enter a number: ";
		cin >> value;
	}

	cout << "Here are the values you entered: " << endl;
	for (int value : numbers)
	{
		cout << value << endl;
	}
}

void sevenFifteen()
{
	/*
	Main accepts no arguments
	it prompts the user for input for
	and stores in parallel arrays the number of hours worked and the hourly rate
	it outputs the gross pay = hours * hours worked
	*/
	cout << fixed << showpoint << setprecision(2);
	int hours[5];
	double rate[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter hours worked for employee " << (i + 1) << ": ";
		cin >> hours[i];
		cout << "Enter hourly rate for employee " << (i + 1) << ": ";
		cin >> rate[i];
	}

	cout << endl << "Gross pay for each employee." << endl;

	for (int count = 0; count < 5; count++)
	{
		cout << "Employee " << (count + 1) << ": \t$" << (hours[count] * rate[count]) << endl;
	}
}

void showValue(int element)
{
	cout << element << " ";
}

void sevenSixteen()
{
	const int SIZE = 8;
	int numbers[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };

	for (int index = 0; index < SIZE; index++)
	{
		showValue(numbers[index]);
	}
}

void sevenSeventeen()
{
	const int SIZE = 8;
	int numbers[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };

	showAllValues(numbers, SIZE);
}

void showAllValues(int values[], int size)
{
	for (int value = 0; value < size; value++)
	{
		cout << values[value] << " ";
	}
}

void sevenEighteen()
{
	/*
	main accepts no arguments
	it declares an array with 4 elements
	it calls getScores, getTotal, and getLowest
	passing the array and the constant for each size
	to each function. After the total and lowest score have been determined, it subtracts the lowest from the
	total and calculates and outputs the average.
	*/

	const int SIZE = 4;
	int scores[SIZE];
	double total, lowest;

	getScores(scores, SIZE);
	total = getTotal(scores, SIZE);
	lowest = getLowest(scores, SIZE);
	total -= lowest;

	cout << "The average of the scores ";
	showAllValues(scores, SIZE);
	cout << fixed << showpoint << setprecision(2);
	cout << "with the lowest score of " << lowest << " dropped is: " << total / (SIZE - 1) << endl;
}

void getScores(int scores[], int size)
{
	/*
	void getScores accepts an array and its size
	it prompts the user for 4 test scores
	and stores them in the array
	*/
	for (int count = 0;  count < size; count++)
	{
		cout << "Enter score " << (count + 1) << ": ";
		cin >> scores[count];
	}
}

double getTotal(int score[], int size)
{
	/*
	double getTotal accepts an array and its size
	it totals all elements of an array
	and returns the total
	*/
	double total = 0.0;

	for (int count = 0; count < size; count++)
	{
		total += score[count];
	}

	return total;
}

double getLowest(int scores[], int size)
{
	/*
	double getLowest accepts an array and its size
	it determines the lowest value in the array
	and returns that value
	*/
	double lowest = scores[0];

	for (int count = 1; count < size; count++)
	{
		if (scores[count] < lowest)
		{
			lowest = scores[count];
		}
	}
	return lowest;
}

void sevenTwentyOne()
{
	/*
	Main accepts no arguments
	it initializes a 3x4 array
	3 rows and 4 columns
	it uses nested loops to input data to the array 
	and output a total of all elements
	*/

	// init
	const int NUM_DIVS = 3;
	const int NUM_QTRS = 4;

	// initialize the 2d array with 3 rows
	// and 4 columns
	double sales[NUM_DIVS][NUM_QTRS];
	double totalSales = 0;
	int div = 0, qtr = 0;
	double sale;

	for (div = 0; div < NUM_DIVS; div++)
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			cout << "Enter the sales for division " << (div + 1) << ", quarter " << (qtr + 1) << ": ";
			cin >> sale;

			sales[div][qtr] = sale;
		}
		cout << endl;
	}
	cout << endl;

	for (div = 0; div < NUM_DIVS; div++)
	{
		for (qtr = 0; qtr < NUM_QTRS; qtr++)
		{
			totalSales += sales[div][qtr];
		}
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales for the company are: $" << totalSales << endl;
}