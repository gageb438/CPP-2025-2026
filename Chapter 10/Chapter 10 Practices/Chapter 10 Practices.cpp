#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	int choice = 2;

	switch (choice)
	{
	case 1:
	{
		string again = "y";
		while (again == "y");
		{
			char Users_Character;

			cout << "Please enter a keyboard character: ";
			cin.ignore();
			cin.get(Users_Character);

			if (isalpha(Users_Character))
			{
				cout << "That is an alpha character." << endl << endl;
			}
			if (isalnum(Users_Character))
			{
				cout << "That is an alphanumeric character." << endl << endl;
			}
			if (isdigit(Users_Character))
			{
				cout << "That character is a digit." << endl << endl;
			}
			if (islower(Users_Character))
			{
				cout << "That character is lowercase." << endl << endl;
			}
			if (isupper(Users_Character))
			{
				cout << "That character is uppercase." << endl << endl;
			}
			if (isprint(Users_Character))
			{
				cout << "That character is a printable character." << endl << endl;
			}
			if (ispunct(Users_Character))
			{
				cout << "That is a printable character." << endl << endl;
			}
			if (isspace)
			{
				cout << "That is a space." << endl << endl;
			}

			cout << "Again? >> ";
			cin >> again;
		}
	}
	case 2:
	{
		string Customer_Number;
		bool Passing = true;
		char Number[8];

		cout << "Please enter your 8 digit customer number: ";
		cin >> Customer_Number;

		for (int Iterator = 0; Iterator < 7; Iterator++)
		{
			Number[Iterator] = Customer_Number[Iterator];
		}

		for (int Iterator = 0; Iterator < 7; Iterator++)
		{
			if (Iterator <= 2)
			{
				if (isalpha(Number[Iterator]))
				{
					continue;
				}
				else
				{
					Passing = false;
				}
			}
			else
			{
				if (isdigit(Number[Iterator]))
				{
					continue;
				}
				else
				{
					Passing = false;
				}
			}
		}

		if (Passing)
		{
			cout << "Account number accepted." << endl;
		}
		else
		{
			cout << "Invalid account number!" << endl;
		}
	}
	case 3:
	{
		char Users_Character;

		cout << "Please enter a keyboard character to make uppercase: ";
		cin.ignore();
		cin.get(Users_Character);
		
		Users_Character = toupper(Users_Character);

		cout << "That character uppercased is " << Users_Character << endl;
	}
	case 4:
	{

	}
	}
}