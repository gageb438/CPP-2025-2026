#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void World_Series()
{
	ifstream Team_File("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Chapter 7\\Chapter 7 exercises\\Teams.txt");
	ifstream Winner_File("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Chapter 7\\Chapter 7 exercises\\WorldSeriesWinners.txt");
	string Line;
	vector<string> Team_List;
	vector<int> Win_List;

	if (!Team_File) 
	{
		return;
	}
	if (!Winner_File)
	{
		return;
	}

	while (getline(Team_File, Line))
	{
		Team_List.push_back(Line);
		Win_List.push_back(0);
	}

	cout << "The following teams have won the World Series at least once: " << endl;

	for (int Index = 0; Index < Team_List.size(); Index++)
	{
		cout << Team_List[Index] << endl;
	}

	while (getline(Winner_File, Line))
	{
		for (int Index = 0; Index < Team_List.size(); Index++)
		{
			if (Team_List[Index] == Line)
			{
				Win_List[Index] = Win_List[Index] + 1;
			}
		}
	}

	string Team_Choice;
	bool Found = false;

	while (true);
	{
		cout << "Enter the name of a team to search for: ";
		cin.ignore();
		getline(cin, Team_Choice);

		if (Team_Choice == "Quit")
		{
			return;
		}
		for (int Index = 0; Index < Team_List.size(); Index++)
		{
			if (Team_Choice == Team_List[Index])
			{
				cout << "The " << Team_Choice << " has won the World Series " << Win_List[Index] << " times." << endl;
				Found = true;
			}
		}
		if (!Found)
		{
			cout << "Invalid input." << endl;
		}
	}
}