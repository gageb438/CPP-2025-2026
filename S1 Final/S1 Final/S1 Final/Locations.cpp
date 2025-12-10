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

string Intro()
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
	Player_Message("Terminal", "The ship's crew has died, or is actively dying.", 2500);
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
	Non_Player_Message("Welcome aboard " + Role + ".", 1500);

	return "";
}