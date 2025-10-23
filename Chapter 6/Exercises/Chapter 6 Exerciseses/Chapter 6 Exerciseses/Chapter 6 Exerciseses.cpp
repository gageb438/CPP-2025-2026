#include <iostream>

using namespace std;

// function prototypes
void lowestScore();
void getScore(int&);
void calcAvg(int, int, int, int, int);
int findLowest(int, int, int, int, int);
void overloadedHospital();
double getTotal(double, double);
double getTotal(double, double, double, double);
void populationGrowth();
int populationCounter(double, double, double);

/*
Main accepts no arguments
it outputs the menu
and runs every program.
*/
int main()
{
	// set choice variable
	int choice;

	// run the loop
	do
	{
		// output
		cout << "Exercise Selection Menu: " << endl;
		cout << "1. Lowest Score Drop " << endl;
		cout << "2. Overloaded Hospital" << endl;
		cout << "3. Population" << endl;
		cout << "4. RPSLS" << endl;
		cout << "5. Quit" << endl;
		cout << ":> ";

		// input and validate
		cin >> choice;
		while (choice < 1 || choice > 5)
		{
			cin >> choice;
		}

		// run each function
		switch (choice)
		{
		case 1:
		{
			lowestScore();
			break;
		}
		case 2:
		{
			overloadedHospital();
			break;
		}
		case 3:
		{
			populationGrowth();
			break;
		}
		case 5:
			cout << "Thank you for using xercise selector!" << endl;
			return 0;
		}
	} while (choice != 5);
}

// LOWEST SCORE FUNCTIONS
// ####################################
/*
LowestScore accepts no arguments
it calculates the average of 5 scores,
after dropping 1
then outputs them all
*/
void lowestScore()
{
	// initialize variables
	int score1 = 0,
		score2 = 0,
		score3 = 0,
		score4 = 0,
		score5 = 0;

	// get every score
	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);

	// calculate the average
	calcAvg(score1, score2, score3, score4, score5);
}

/*
get score accepts an arugment for the score
as a reference variable, then takes input for it.
and returns nothing.
*/
void getScore(int& score)
{
	// take input
	cout << "Enter a test score: ";
	cin >> score;

	// validate it.
	while (score < 0 || score > 100)
	{
		cin >> score;
	}
}

/*
calc avg takes input for all 5 scores
then finds the total, and goes to find the lowest
and subtracts the lowest,
then outputs the average.
*/
void calcAvg(int score1, int score2, int score3, int score4, int score5)
{
	int total = score1 + score2 + score3 + score4 + score5;
	int lowest = findLowest(score1, score2, score3, score4, score5);
	total -= lowest;

	cout << "The average of the 5 scores, after dropping the lowest, is: " << total / 4 << endl;
}

/*
findLowest takes input for all 5 scores
it then finds the lowest value of every score.
and returns the value as a number.
*/
int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	int lowest = 101;

	if (score1 < lowest)
	{
		lowest = score1;
	}
	if (score2 < lowest)
	{
		lowest = score2;
	}
	if (score3 < lowest)
	{
		lowest = score3;
	}
	if (score4 < lowest)
	{
		lowest = score4;
	}
	if (score5 < lowest)
	{
		lowest = score5;
	}

	return lowest;
}
// ####################################

// OVERLOADED HOSPITAL FUNCTIONS
// ####################################

/*
Overloaded hospital accepts no arguments
it runs all the functions for the hospital
and returns nothing.
*/
void overloadedHospital()
{
	// initialize variables
	char patientType = 'a';
	double medicationCharges,
		otherCharges,
		total;

	// header
	cout << endl << "This program will compute patient hospital charges" << endl;
	cout << "What was the patient type?" << endl;

	// validate and take input.
	do
	{
		cout << "In-Patient or Out-Patient? (I or O) : ";
		cin >> patientType;
		cin.ignore();
	} while (patientType != 'I' && patientType != 'O');

	if (patientType == 'I')
	{
		double days,
			roomRate;
		cout << "Number of days in the hospital: ";
		cin >> days;
		cout << "Daily room rate: $";
		cin >> roomRate;
		cout << "Medication charges: $";
		cin >> medicationCharges;
		cout << "Lab fees and other service charges: $";
		cin >> otherCharges;

		cout << endl;
		total = getTotal(days, roomRate, medicationCharges, otherCharges);
	}
	else
	{
		cout << "Medication charges: $";
		cin >> medicationCharges;
		cout << "Lab fees and other service charges: $";
		cin >> otherCharges;
		cout << endl;
		total = getTotal(medicationCharges, otherCharges);
	}

	cout << "The total charges are: $" << total << endl << endl;
}

double getTotal(double medicationCharges, double otherCharges)
{
	return medicationCharges + otherCharges;
}

double getTotal(double days, double roomRate, double medicationCharges, double otherCharges)
{
	return medicationCharges + otherCharges + (days * roomRate);
}

// ####################################

// POPULATION FUNCTIONS
// ####################################

void populationGrowth()
{
	int startingPopulation, years;
	double birthRate, deathRate;
	cout << "This program calculates population change." << endl;
	cout << "Enter the starting population: ";
	cin >> startingPopulation;

	while (startingPopulation < 2)
	{
		cin >> startingPopulation;
	}

	cout << "Enter the birth rate (as % of the current population) :> ";
	cin >> birthRate;

	cout << "Enter the death rate (as % of the current population) :> ";
	cin >> deathRate;

	cout << "For how many years would you like to view the population changes? :> ";
	cin >> years;

	while (years < 2)
	{
		cin >> years;
	}

	cout << endl << endl;

	for (int yearCounter = 0; yearCounter != years; yearCounter++)
	{
		startingPopulation = populationCounter(startingPopulation, birthRate, deathRate);
		cout << "Population at the end of year " << yearCounter << " is " << startingPopulation << "." << endl;;
	}
}

int populationCounter(double startingPopulation, double birthRate, double deathRate)
{
	return startingPopulation + ((birthRate / 100) * startingPopulation) - ((deathRate / 100) * startingPopulation);
}