#include <iostream>

using namespace std;

int main()
{
	/*
	Program 3-6
	Accepts no arguments
	Takes input from the user for three test scores
	and finds and outputs the average
	*/

	double test1, test2, test3, average;

	cout << "Input the score for test #1: ";
	cin >> test1;

	cout << "Input the score for test #2: ";
	cin >> test2;

	cout << "Input the score for test #3: ";
	cin >> test3;

	average = (test1 + test2 + test3) / 3;

	cout << "The average of the three test scores " << test1 << ", " << test2 << ", and " << test3 << " is: " << average << endl;

}