#include <iostream>
#include <string>

using namespace std;

int main()
{
	char ch; // define char varaible to take input during pause
	int number;
	string first, last, both;

	// get input from the user
	cout << "Enter a number: ";
	cin >> number;
	cin.ignore();

	cout << "Enter a character: ";
	ch = cin.get()

	cout << "Enter your first name: ";
	cin.ignore();
	getline(cin, first);

	cout << "Enter your last name: ";
	getline(cin, last);

	both = first + " " + last;

	cout << "Hello " << both << "." << endl;
	cout << "You entered the number " << number << " and the letter " << ch << endl << "Thank you " << both << "!" << endl
}