#include <iostream>
#include <fstream>

using namespace std;

// function prototypes
void sevOneRe();
void sevThree();
void fileRead();

int main()
{
	//sevOneRe();
	//sevThree();
	fileRead();

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