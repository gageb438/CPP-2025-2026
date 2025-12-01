#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void World_Series()
{
	ifstream Teams("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Chapter 7\\Chapter 7 exercises\\Teams.txt");
	ifstream Winners("C:\\Users/2013565\\Documents\\GitHub\\CPP-2025-2027\\Chapter 7\\Chapter 7 exercises\\Teams.txt");
	vector<string> Team_List;
	vector<int> Win_List;
	string Team_Name;
	string line;
	int counter = 0;

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
		Team_List[counter] = line;
		counter++;
	}

	cout << endl;
	cout << "Enter the name of one of the teams: ";
	cin >> Team_Name;

	if (find(Team_List.begin(), Team_List.end(), Team_Name))
	{

	}
}