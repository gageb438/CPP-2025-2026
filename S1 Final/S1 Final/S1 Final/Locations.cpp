#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

void Send_Message(string Person, string Message, int Message_Wait);
void Show_Message(string Message, int Message_Wait);

void Intro()
{
	Show_Message("An alarm blares in the background...", 0);
	Show_Message("You awaken in a dark environment, an announcement awaking you.", 2000);
	cout << endl;

	Send_Message("Orion - 7.13.10 Intercom", "The Orion is currently experiencing multiple critical system failures.", 3500);
	Send_Message("Orion - 7.13.10 Intercom", "Lockdown initiated.", 3500);
	cout << endl;

	Show_Message("As the alarm blares, and the announcements come through, you stand up off the cold metal floor and sit in your chair.", 2000);
	
	Show_Message("The terminal flickers to life, displaying an overlay of the Orion.", 4000);
	cout << endl;

	cout << endl;
	Send_Message("Captain Terminal", "Welcome Captain.", 4500);
	Send_Message("Captain Terminal", "As the previous captain has been lost, you are next in line.", 2500);
	Send_Message("Captain Terminal", "What would you like to be called, captain?", 3500);

	string Player_Name;
	cout << ":> ";
	cin.ignore();
	getline(cin, Player_Name);

	
}