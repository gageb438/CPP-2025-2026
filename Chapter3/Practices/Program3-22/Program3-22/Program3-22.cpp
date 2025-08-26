#include <iostream>

using namespace std;

int main()
{
	/*
	Program 3-22
	accepts no arguments
	it demonstrates problems with mixing the use of cin and cin.get()
	*/

	char ch; // define a char variable to take input during pause
	int number;

	cout << "Enter a number: ";
	cin >> number;
	cin.ignore(); // skip[ the next character in the keyboard buffer
	cout << "Enter a character: ";
	ch = cin.get();

	cout << "\nThe program has been terminated.  Thank you!\n";

	return 0;
}