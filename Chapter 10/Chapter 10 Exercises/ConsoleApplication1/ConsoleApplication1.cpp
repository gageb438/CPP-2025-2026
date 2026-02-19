#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string Upperify(const char* Editable_Manipulator);
string Lowerify(const char* Editable_Manipulator);

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

			cout << "String you input : " << Manipulator << endl;

			string Uppercased_Result = Upperify(Manipulator.c_str());

			cout << "Uppercased string : " << Uppercased_Result << endl;

			string Lowercased_Result = Lowerify(Manipulator.c_str());

			cout << "Lowercased string : " << Lowercased_Result << endl;
		}
		}

	}
}

string Upperify(const char* Un_Editable_Manipulator)
{
	char Editable_Manipulator[2048];
	strcpy_s(Editable_Manipulator, 2048, Un_Editable_Manipulator);

	for (int Iterator = 0; Iterator < 2048; Iterator++)
	{
		if (Editable_Manipulator[Iterator] == '\0')
		{
			break;
		}
		else
		{
			Editable_Manipulator[Iterator] = toupper(Editable_Manipulator[Iterator]);
		}
	}

	return string(Editable_Manipulator);
}

string Lowerify(const char* Un_Editable_Manipulator)
{
	char Editable_Manipulator[2048];
	strcpy_s(Editable_Manipulator, 2048, Un_Editable_Manipulator);

	for (int Iterator = 0; Iterator < 2048; Iterator++)
	{
		if (Editable_Manipulator[Iterator] == '\0')
		{
			break;
		}
		else
		{
			Editable_Manipulator[Iterator] = tolower(Editable_Manipulator[Iterator]);
		}
	}

	return string(Editable_Manipulator);
}

string Reversify(const char* Un_Editable_Manipulator)
{
	char Editable_Manipulator[2048];
	strcpy_s(Editable_Manipulator, 2048, Un_Editable_Manipulator);

	for (int Iterator 0; Iterator < )
}