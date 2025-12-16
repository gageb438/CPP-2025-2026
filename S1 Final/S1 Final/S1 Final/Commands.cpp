#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

string Command_Input()
{
	string Valid_Commands[1] = { "look" };
	string Command;

	cout << ":> ";
	
	cin.ignore();
	getline(cin, Command);

	auto Find_Command = find(begin(Valid_Commands), end(Valid_Commands), Command);

	while (Find_Command == end(Valid_Commands))
	{
		cout << "Invalid command. Commands must be lower cased." << endl;
		cout << ":> ";
		
		getline(cin, Command);

		if (Command == "\n")
		{
			getline(cin, Command);
		}
	}
} 