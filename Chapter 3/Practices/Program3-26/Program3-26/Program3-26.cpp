#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	/*
	Program3-26
	Accepts no arguments
	Simulates rolling two 6-sided dice
	and outputs the dice
	*/
	
	const int diceSides = 6;
	int dice1, dice2;
	
	unsigned seed = time(0);
	srand(seed);

	dice1 = (rand() % (diceSides)) + 1;
	dice2 = (rand() % (diceSides)) + 1;

	cout << "Rolling the dice..." << endl;
	cout << dice1 << endl << dice2;

	return 0;
}