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
	
	while (getline(Team_File, Line))
	{
		Team_List.push_back(Line);
	}

	cout << "The following teams have won the World Series at least once: " << endl;

	for (int Index = 0; Index < Team_List.size(); Index++)
	{
		cout << Team_List[Index] << endl;
	}
}