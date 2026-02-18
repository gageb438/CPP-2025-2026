#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void Upperify(const char* Editable_Manipulator);

int main()
{
	int Choice;

	while (true)
	{
		cout << endl;

		cout << "Chapter 10 programming exercises menu:" << endl;
		cout << "1: Case Manipulator" << endl;

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
			
			cin.ignore();
			getline(cin, Manipulator);

			const char* Un_Editable_Manip = Manipulator.c_str();

			char Editable_Manipulator[2048];

			strcpy_s(Editable_Manipulator, 2048, Un_Editable_Manip);

			cout << "String you input : " << Editable_Manipulator << endl;

			Upperify(Un_Editable_Manip);

			cout << "Uppercased string : " << Editable_Manipulator << endl;
		}
		}

	}
}

void Upperify(const char* Un_Editable_Manipulator)
{
	char Editable_Manipulator[2048];
	strcpy_s(Editable_Manipulator, 2048, Un_Editable_Manipulator);

	for (int Iterator = 0; Iterator < 1024; Iterator++)
	{
		if (Editable_Manipulator[Iterator] == '\0')
		{
			return;
		}
		else
		{
			Editable_Manipulator[Iterator] = toupper(Editable_Manipulator[Iterator]);
		}
	}
}

void Lowerify()
{

}

void Reversify()
{

}