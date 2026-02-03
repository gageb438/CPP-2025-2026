#include <iostream>

using namespace std;

int main()
{
	/*
	Program 3-21
	Accepts no arguments
	demonstrates three ways to use cin.get() to pause a program
	*/

	char ch; // define a char variable to take an input during pause

	cout << "The program has paused once...  Press Enter to move on.";
	cin.get(ch);

	cout << "The program has paused a second time...  Press Enter to move on.";
	cin.get();

	cout << "The program has paused a third time...  Press Enter again to end the program.";
	cin.get();

	cout << "The program has terminated. Thank you!" << endl;
}