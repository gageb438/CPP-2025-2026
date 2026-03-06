// Speakers_Bureau.cpp
#include <iostream>
#include <string> // For getline
#include <vector> // For speaker tracking

using namespace std;

struct Speaker
{
	string Speaker_Name, Topic;
	int Telephone, Number;
	double Fee;
};

vector<Speaker> Speakers;

Speaker Enter_Speaker_Information();
void Change_Speaker();


int main()
{
	/*
	Main displays a menu with 4 options.
	1. Enter new speaker information
	2. Change speaker information
	3. Display all speaker information
	4. Exit the program
	*/

	// Init
	const int VALID_MAX = 4, VALID_MIN = 1;
	int Choice = -1;

	while (true)
	{
		// Take input
		while (Choice < VALID_MIN || Choice > VALID_MAX)
		{
			cout << "1. Enter New Speaker Information" << endl;
			cout << "2. Change Speaker Information" << endl;
			cout << "3. Display All Speaker Information" << endl;
			cout << "4. Exit The Program" << endl;
			cout << ":> ";
			cin >> Choice;
		}

		switch (Choice)
		{
		case 1:
		{
			Speaker To_Add = Enter_Speaker_Information();
			Speakers.push_back(To_Add);
			break;
		}
		case 2:
		{
			Change_Speaker();
			break;
		}
		case 4:
		{
			cout << "Thank you for using the program." << endl;
			exit(0);
		}
		}

		Choice = -1;
	}
}

Speaker Enter_Speaker_Information()
{
	Speaker Item;
	bool Invalid = true;

	do
	{
		Invalid = false;
		cout << "Enter speaker name :> ";
		cin.ignore();
		getline(cin, Item.Speaker_Name);

		for (int Iterator = 0; Iterator < Speakers.size(); Iterator++)
		{
			if (Speakers[Iterator].Speaker_Name == Item.Speaker_Name)
			{
				Invalid = true;
				cout << "That speaker name is already taken." << endl;
				break;
			}
		}
	} while (Invalid);

	cout << "Telephone :> ";
	cin >> Item.Telephone;
	
	cout << "Speaking Topic :> ";
	cin.ignore();
	getline(cin, Item.Topic);
	
	cout << "Fee Required :> "; 
	cin >> Item.Fee;
	
	Item.Number = Speakers.size() + 1;

	cout << "You have entered information for speakers number " << Item.Number << endl;

	return Item;
}

void Change_Speaker()
{
	int Speaker_Number;
	cout << "Enter your choice :> ";
	cin >> Speaker_Number;
	
	for (int Iterator = 0; Iterator < Speakers.size(); Iterator++)
	{
		if (Speakers[Iterator].Number == Speaker_Number)
		{
			Speakers[Iterator] = Enter_Speaker_Information();
			return;
		}
	}

	cout << "Speaker number not found." << endl;
	return;
}