#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

string Upperify(const char* Editable_Manipulator);
string Lowerify(const char* Editable_Manipulator);
string Reversify(const char* Editable_Manipulator);

int main()
{
	int Choice;

	while (true)
	{
		cout << endl;

		cout << "Chapter 10 programming exercises menu:" << endl;
		cout << "1: Case Manipulator" << endl;
		cout << "2: Password Verifier" << endl;
		cout << "3: File Analysis" << endl;

		cout << ":> ";
		cin >> Choice;

		if (Choice < 0 || Choice > 3)
		{
			cout << "Invalid input." << endl;
			continue;
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

			string Reversed_Result = Reversify(Manipulator.c_str());

			cout << "Reversed string : " << Reversed_Result << endl;
		}
		case 2:
		{
			string Password;
			const char* Password_C;
			cout << "Password Verifier:" << endl;
			cout << "Input a password : ";

			cin.ignore();
			getline(cin, Password);

			Password_C = Password.c_str();

			int Digits = 0;
			int Uppercase = 0;
			int Lowercase = 0;
			int Characters = 0;

			for (int Iterator = 0; Password_C[Iterator] != '\0'; Iterator++)
			{
				if (isdigit(Password_C[Iterator]))
				{
					Digits++;
				}
				if (isupper(Password_C[Iterator]))
				{
					Uppercase++;
				}
				if (islower(Password_C[Iterator]))
				{
					Lowercase++;
				}
				Characters++;
			}

			bool Valid = true;

			if (Characters >= 9)
			{
				if (Digits == 0)
				{
					cout << "Password Invalid, it must have at least 1 digit." << endl;
					Valid = false;
				}
				if (Lowercase == 0)
				{
					cout << "Password Invalid, it must have at least 1 lowercase character." << endl;
					Valid = false;
				}
				if (Uppercase == 0)
				{
					cout << "Password Invalid, it must have at least 1 uppercase letter." << endl;
					Valid = false;
				}
			}
			else
			{
				cout << "Password Invalid, it must have at least 9 characters." << endl;
				Valid = false;
			}

			if (Valid)
			{
				cout << "Your password is valid. " << endl;
			}
		}
		case 3:
		{
			ifstream File("text.txt");
			string Line;

			if (!File || !File.is_open())
			{
				cout << "An error has occured opening the file." << endl;
				continue;
			}

			vector<string> Lines;

			while (getline(File, Line))
			{
				Lines.push_back(Line);
			}

			int Lowercase = 0, Uppercase = 0, Digits = 0, Line_Count = 0;

			for (int Iterator = 0; Iterator < Lines.size() - 1; Iterator++)
			{
				Line_Count++;
				string Current = Lines[Iterator];
				string Using = Current.c_str();
				
				int Iterator_2 = 0;
				while (Using[Iterator_2] != '\0')
				{
					if (isdigit(Using[Iterator_2]))
					{
						Digits++;
					}
					if (isalpha(Using[Iterator_2]))
					{
						if (islower(Using[Iterator_2]))
						{
							Lowercase++;
						}
						else
						{
							Uppercase++;
						}
					}

					Iterator_2++;
				}
			}

			cout << "Uppercase characters: " << Uppercase << endl;
			cout << "Lowercase characters: " << Lowercase << endl;
			cout << "Digits: " << Digits << endl;
			cout << "Sentences: " << Line_Count << endl;
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

	int Furthest_Left = 0;
	int Furthest_Right = size(Editable_Manipulator) - 1;
	
	for (int Iterator = 0; Iterator < 2048; Iterator++)
	{
		if (Iterator != 0)
		{
			if (Editable_Manipulator[Iterator] == '\0')
			{
				Furthest_Right = Iterator - 1;
				break;
			}
		}
	}
	
	while (Furthest_Left < Furthest_Right)
	{
		char stored = Editable_Manipulator[Furthest_Left];
		Editable_Manipulator[Furthest_Left] = Editable_Manipulator[Furthest_Right];
		Editable_Manipulator[Furthest_Right] = stored;

		Furthest_Left++;
		Furthest_Right--;
	}

	return Editable_Manipulator;
}