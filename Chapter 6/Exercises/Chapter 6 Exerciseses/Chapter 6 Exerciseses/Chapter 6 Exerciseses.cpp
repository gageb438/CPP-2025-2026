#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>

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
double populationCounter(double, double, double);
string compChoice();
string playerChoice();
void winner(string, string);
void rplsHandler();

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
		case 4:
		{
			rplsHandler();
			break;
		}
		case 5:
			cout << "Thank you for using exercise selector!" << endl;
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
	// accepts arguments for all 5 scores
	// finds the lowest score

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
	// accepts no arguments
	// finds total hospital charges
	// and outputs them
	
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
	// accepts 2 arguments for medication and other charges
	// calculates total for out-patient
	// and returns it
	return medicationCharges + otherCharges;
}

double getTotal(double days, double roomRate, double medicationCharges, double otherCharges)
{
	// accepts 4 arguments for days, room rate, medication charges, and other charges
	// calculates total for in-patient
	// and returns it
	return medicationCharges + otherCharges + (days * roomRate);
}

// ####################################

// POPULATION FUNCTIONS
// ####################################

void populationGrowth()
{
	// accepts no arguments
	// calculates population growth over a number of years
	// with given birth and death rates

	// initialize variables
	int years;
	double birthRate, deathRate, startingPopulation;

	// output header
	cout << "This program calculates population change." << endl;
	cout << "Enter the starting population: ";

	// take input
	cin >> startingPopulation;

	// validate
	while (startingPopulation < 2)
	{
		cin >> startingPopulation;
	}

	// take input for rates and years
	cout << "Enter the birth rate (as % of the current population) :> ";
	cin >> birthRate;

	cout << "Enter the death rate (as % of the current population) :> ";
	cin >> deathRate;

	cout << "For how many years would you like to view the population changes? :> ";
	cin >> years;

	// validate again.
	while (years < 2)
	{
		cin >> years;
	}

	cout << endl;

	// for every year, calculate and output the population
	for (int yearCounter = 1; yearCounter <= years; yearCounter++)
	{
		startingPopulation = populationCounter(startingPopulation, birthRate, deathRate);
		cout << "Population at the end of year " << yearCounter << " is " << static_cast<int>(startingPopulation) << "." << endl;
	}

	cout << endl;
}

double populationCounter(double startingPopulation, double birthRate, double deathRate)
{
	// calculates the population after 1 year
	return startingPopulation + ((birthRate / 100) * startingPopulation) - ((deathRate / 100) * startingPopulation);
}

// ####################################

// RPSLS FUNCTIONS
// ####################################

void rplsHandler()
{
	// accpetps no arguments
	// calls comp_choice, plaeyr_choice, and winner to play the game
	// outputs a greeting, each player's weapon, and prompts to continue

	// output header
	cout << "Welcome to Rock, Paper, Scissors, Lizard, Spock!" << endl;
	cout << "You will be playing against the computer." << endl;

	// get choices and find winner.
	string computer_weapon = compChoice();
	string player_weapon = playerChoice();
	winner(player_weapon, computer_weapon);
}

string compChoice()
{
	// accepts no arguments
	// randomly selects and returns a weapon for the computer

	// create array of the weapons
	string weapons[5] = { "rock", "paper", "scissors", "lizard", "spock" };
	
	// seed the random
	srand(time(0));

	// get a random time and return the weapon.
	int choice = rand() % 5;
	return weapons[choice - 1];
}

string playerChoice()
{
	// accepts no arguments
	// prompts the player to select a weapon with a number (1-5)
	// validates the input
	// and returns the weapon as a string

	// create array of the weapons
	string weapons[5] = { "rock", "paper", "scissors", "lizard", "spock" };
	int choice;

	// prompt for input
	cout << "Select your weapon: " << endl;
	cout << "1. Rock" << endl;
	cout << "2. Paper" << endl;
	cout << "3. Scissors" << endl;
	cout << "4. Lizard" << endl;
	cout << "5. Spock" << endl;
	cout << ":> ";
	cin >> choice;

	// validate input
	while (choice < 1 || choice > 5)
	{
		cout << ":> ";
		cin >> choice;
	}

	// return the weapon
	return weapons[choice - 1];
}

void winner(string playerWeapon, string computerWeapon)
{
	// accepts 2 arguments, the player's weapon and the computer's weapon
	// compares them to determine a winner
	// outputs the result
	cout << "The computer chose " << computerWeapon << "." << endl;
	cout << "You chose " << playerWeapon << "." << endl;


	if (playerWeapon == computerWeapon)
	{
		cout << "It's a tie!";
	}
	// rock cases
	else if (playerWeapon == "rock" && computerWeapon == "scissors")
	{
		cout << "You win! Rock crushes scissors.";
	}
	else if (playerWeapon == "rock" && computerWeapon == "spock")
	{
		cout << "You lose. Spock vaporizes rock.";
	}
	else if (playerWeapon == "rock" && computerWeapon == "paper")
	{
		cout << "You lose. Paper covers rock.";
	}
	else if (playerWeapon == "rock" && computerWeapon == "lizard")
	{
		cout << "You win! Rock crushes lizard.";
	}
	// scissors cases
	else if (playerWeapon == "scissors" && computerWeapon == "paper")
	{
		cout << "You win! Scissors cuts paper.";
	}
	else if (playerWeapon == "scissors" && computerWeapon == "rock")
	{
		cout << "You lose. Rock crushes scissors.";
	}
	else if (playerWeapon == "scissors" && computerWeapon == "spock")
	{
		cout << "You lose. Spock smashes scissors.";
	}
	else if (playerWeapon == "scissors" && computerWeapon == "lizard")
	{
		cout << "You win! Scissors decapitates lizard.";
	}
	// paper cases
	else if (playerWeapon == "paper" && computerWeapon == "rock")
	{
		cout << "You win! Paper covers rock.";
	}
	else if (playerWeapon == "paper" && computerWeapon == "scissors")
	{
		cout << "You lose. Scissors cuts paper.";
	}
	else if (playerWeapon == "paper" && computerWeapon == "spock")
	{
		cout << "You win! Paper disproves spock.";
	}
	else if (playerWeapon == "paper" && computerWeapon == "lizard")
	{
		cout << "You lose. Lizard eats paper.";
	}
	// lizard cases
	else if (playerWeapon == "lizard" && computerWeapon == "spock")
	{
		cout << "You win! Lizard poisons spock.";
	}
	else if (playerWeapon == "lizard" && computerWeapon == "rock")
	{
		cout << "You lose. Rock crushes lizard.";
	}
	else if (playerWeapon == "lizard" && computerWeapon == "paper")
	{
		cout << "You win! Lizard eats paper.";
	}
	else if (playerWeapon == "lizard" && computerWeapon == "scissors")
	{
		cout << "You lose. Scissors decapitates lizard.";
	}
	// spock cases
	else if (playerWeapon == "spock" && computerWeapon == "scissors")
	{
		cout << "You win! Spock smashes scissors.";
	}
	else if (playerWeapon == "spock" && computerWeapon == "paper")
	{
		cout << "You lose. Paper disproves spock.";
	}
	else if (playerWeapon == "spock" && computerWeapon == "rock")
	{
		cout << "You win! Spock vaporizes rock.";
	}
	else if (playerWeapon == "spock" && computerWeapon == "lizard")
	{
		cout << "You lose. Lizard poisons spock.";
	}
	else
	{
		cout << "Error in determining winner.";
	}
	cout << endl;
}