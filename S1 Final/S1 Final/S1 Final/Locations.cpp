#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <algorithm>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\x1b[94m"

using namespace std;

void Player_Message(string Person, string Message, int Message_Wait);
void Non_Player_Message(string Message, int Message_Wait);
void Interface_Introduction();

//###########################
const bool QUICK_SKIP = false;
//###########################


string Intro1()
{
	if (!QUICK_SKIP)
	{
		cout << RED;
		Non_Player_Message("An alarm blares in the background...", 4000);
		cout << RESET;

		Non_Player_Message("You awaken in a dark environment, an announcement awaking you.", 2000);
		cout << endl;

		cout << BLUE;
		Player_Message("Orion - 7.13.10 Intercom", "The Orion is currently experiencing multiple critical system failures.", 3500);
		Player_Message("Orion - 7.13.10 Intercom", "Lockdown initiated.", 3500);
		cout << endl;
		cout << RESET;

		Non_Player_Message("As the alarm blares, and the announcements come through, you stand up off the cold metal floor and sit in your chair.", 2000);
		Non_Player_Message("The terminal flickers to life, displaying an overlay of the Orion.", 4000);
		cout << endl;

		cout << BLUE;
		Player_Message("Terminal", "Welcome sailor.", 4500);
		Player_Message("Terminal", "The ship's crew has is actively dying.", 2500);
		Player_Message("Terminal", "What role will you take up?", 3500);
		cout << RESET;
		cout << "-- (Choices: Captain / Engineer / Medic / Security) --" << endl;

		string Role;
		cout << ":> ";
		cin >> Role;

		transform(Role.begin(), Role.end(), Role.begin(), [](unsigned char c) { return tolower(c); });

		while (Role != "captain" && Role != "engineer" && Role != "medic" && Role != "security")
		{
			cout << endl;
			cout << "Computing..." << endl;
			Non_Player_Message("Invalid choice. Please choose a valid role.", 1500);
			cout << ":> ";
			cin >> Role;
		}

		cout << "Computing..." << endl;

		return Role;
	}
	else
	{
		cout << RED;
		cout << "An alarm blares in the background..." << endl;
		cout << RESET;

		cout << "You awaken in a dark environment, an announcement awaking you." << endl;
		cout << endl;

		cout << BLUE;
		cout << "Orion - 7.13.10 Intercom : The Orion is currently experiencing multiple critical system failures." << endl;
		cout << "Orion - 7.13.10 Intercom : Lockdown initiated." << endl;
		cout << endl;
		cout << RESET;

		cout << "As the alarm blares, and the announcements come through, you stand up off the cold metal floor and sit in your chair." << endl;
		cout << "The terminal flickers to life, displaying an overlay of the Orion." << endl;
		cout << endl;

		cout << BLUE;
		cout << "Terminal - Welcome sailor." << endl;
		cout << "Terminal - The ship's crew has is actively dying." << endl;
		cout << "Terminal - What role will you take up?" << endl;
		cout << RESET;
		cout << "-- (Choices: Captain / Engineer / Medic / Security) --" << endl;

		string Role;
		cout << ":> ";
		cin >> Role;

		transform(Role.begin(), Role.end(), Role.begin(), [](unsigned char c) { return tolower(c); });

		while (Role != "captain" && Role != "engineer" && Role != "medic" && Role != "security")
		{
			cout << endl;
			cout << "Computing..." << endl;
			cout << "Invalid choice. Please choose a valid role." << endl;
			cout << ":> ";
			cin >> Role;
		}

		cout << "Computing..." << endl;

		return Role;
	}
}

string Intro2(string Role)
{
	if (!QUICK_SKIP)
	{
		string Name;

		cout << BLUE << endl;
		Player_Message("Terminal", "What is your name " + Role + "?", 1500);
		cout << RESET;

		cout << ":> ";
		cin.ignore();
		getline(cin, Name);

		cout << endl << "Computing..." << endl;

		cout << BLUE << endl;
		Player_Message("Terminal", "Welcome aboard " + Name + ".", 1500);
		cout << RESET;

		return Name;
	}
	else
	{
		string Name;

		cout << BLUE << endl;
		cout << "Terminal - What is your name " << Role << "?" << endl;
		cout << RESET;

		cout << ":> ";
		cin.ignore();
		getline(cin, Name);

		cout << endl << "Computing..." << endl;

		cout << BLUE << endl;
		cout << "Terminal - Welcome aboard " << Name << "." << endl;
		cout << RESET;

		return Name;
	}
}

string Medic(string Name)
{
	cout << endl << "You stand up from the terminal." << endl;
	cout << "You grab your uniform, medkit, and shield applicator." << endl;

	cout << "There is 500 souls on this ship. The majority is heavily injured." << endl;
	cout << "Your goal is to save everyone you can." << endl;

	Interface_Introduction();
	return "";
}

void Interface_Introduction()
{
	char Choice;

	cout << "(Interface Tutorial)" << endl;
	cout << "Would you like to begin the tutorial?" << endl;
	cout << "(Y/N) :> ";
	cin.get(Choice);

	if (Choice == 'y' || Choice == 'Y')
	{
		cout << "The interface is simple." << endl;
		cout << "Commands will be typed (i.e 'look')" << endl;
		cout << "If theres a complex command, each part of the command will be seperated by a space (i.e 'heal soldier'). " << endl;
		cout << "At any point if you would like to quit, type 'QUIT'. Commands are case sensitive." << endl;
		cout << "If you need to get the description of the room/whats happening, type info" << endl;
		cout << "For a valid list of commands, type cmd" << endl;

		return;
	}
	else
	{
		return;
	}
}