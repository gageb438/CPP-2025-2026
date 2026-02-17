#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int Choice;

	cout << "Chapter 10 programming exercises menu:" << endl;
	cout << "1: Case Manipulator" << endl;

	while (true)
	{
		cout << ":> ";
		cin >> Choice;

		if (Choice < 0 || Choice > 1)
		{
			cout << "Invalid input. " << endl;
		}

		switch (Choice)
		{
		case 0:
		{
			cout << "Thank you for using my menu!" << endl;
			cout << "Goodbye. " << endl;

			return 0;
		}
		case 1:
		{
			string Manipulator;
			

			cout << "Case Manipulator:" << endl;
			cout << "Input a string to manipulate: ";
			
			getline(cin, Manipulator);

			char Manipulator_2[] = Manipulator;
		}
		}

	}
}

void Upperify()
{

}

void Lowerify()
{

}

void Reversify()
{

}