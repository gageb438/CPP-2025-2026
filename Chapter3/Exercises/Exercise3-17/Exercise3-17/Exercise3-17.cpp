#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	/*
	Exercise 3-17
	Generates a random number from 1-500
	adds them together
	and displays the answer
	*/

	// give a seed and create variables
	unsigned seed = time(0);
	srand(seed);

	int maxNum = 500, 
		minNum = 1, 
		num1 = (rand() % (maxNum - minNum + 1)) + minNum,
		num2 = (rand() % (maxNum - minNum + 1)) + minNum, 
		output = num1 + num2;

	char ch;

	// output the math problem
	cout << "  " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "------" << endl;

	// take input to see the answer
	cout << "\nPress Enter to see the answer...";
	ch = cin.get();

	// output the answer and problem again/
	cout << "\n  " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "------" << endl;
	cout << "  " << output << endl;

	return 0;
}