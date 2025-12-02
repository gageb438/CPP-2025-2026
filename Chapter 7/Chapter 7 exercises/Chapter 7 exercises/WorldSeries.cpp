#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void World_Series()
{
	ifstream Teams("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Chapter 7\\Chapter 7 exercises\\Teams.txt");
	ifstream Winners("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Chapter 7\\Chapter 7 exercises\\Teams.txt");
	vector<string> Team_List;
	vector<int> Win_List;
	string Team_Name;
	string line;

	if (!Teams)
	{
		cout << "Teams not found.";
		return;
	}
	if (!Winners)
	{
		cout << "Winners not found.";
		return;
	}

	while (getline(Teams, line))
	{
		cout << line << endl;
		Team_List.push_back(line);
	}
	Teams.close();

	Win_List.resize(Team_List.size(), 0);

	while (getline(Winners, line))
	{
		auto pos = find(Team_List.begin(), Team_List.end(), line);
		Win_List[pos] += 1;
	}

	Winners.close();

	cout << endl;
	cout << "Enter the name of one of the teams: ";
	cin >> Team_Name;

	while (find(Team_List.begin(), Team_List.end(), Team_Name) != Team_List.end())
	{
		cout << endl << "Enter the name of one of the teams: ";
		cin >> Team_Name;
	}

	auto Pos = find(Win_List.begin(), Win_List.end(), Team_Name);
	cout << "The " << Team_Name << " have won the World Series " << Win_List[Pos] << " times between 1903 and 2012." << endl;
}
