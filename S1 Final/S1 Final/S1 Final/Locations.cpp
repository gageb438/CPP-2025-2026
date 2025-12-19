#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <algorithm>
#include <limits>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\x1b[94m"

using namespace std;

void Player_Message(string Person, string Message, int Message_Wait);
void Non_Player_Message(string Message, int Message_Wait);
void Interface_Introduction();
void Scene_Medic1(string Name);
void Scene_Medic2(string Name);
int Scene_Medic3(string Name);

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

		Non_Player_Message("You awaken in a dark environment, an announcement awakening you.", 2000);
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
		Player_Message("Terminal", "Welcome, sailor.", 4500);
		Player_Message("Terminal", "The ship's crew is actively dying.", 2500);
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
			transform(Role.begin(), Role.end(), Role.begin(), [](unsigned char c) { return tolower(c); });
		}

		cout << "Computing..." << endl;

		return Role;
	}
	else
	{
		cout << RED;
		cout << "An alarm blares in the background..." << endl;
		cout << RESET;

		cout << "You awaken in a dark environment, an announcement awakening you." << endl;
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
		cout << "Terminal - Welcome, sailor." << endl;
		cout << "Terminal - The ship's crew is actively dying." << endl;
		cout << "Terminal - What role will you take up?" << endl;
		cout << RESET;
		cout << "-- (Choices: C̶a̶p̶t̶a̶i̶n̶ / E̶n̶g̶i̶n̶e̶e̶r̶ / Medic / S̶e̶c̶u̶r̶i̶t̶y̶) --" << endl;

		string Role;
		cout << ":> ";
		cin >> Role;

		transform(Role.begin(), Role.end(), Role.begin(), [](unsigned char c) { return tolower(c); });

		while (Role != /*"captain" && Role != "engineer" && Role != */"medic" /*&& Role != "security"*/)
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
		Player_Message("Terminal", "What is your name, " + Role + "?", 1500);
		cout << RESET;

		cout << ":> ";
		cin.ignore();
		getline(cin, Name);

		cout << endl << "Computing..." << endl;

		cout << BLUE << endl;
		Player_Message("Terminal", "Welcome aboard, " + Name + ".", 1500);
		cout << RESET;

		return Name;
	}
	else
	{
		string Name;

		cout << BLUE << endl;
		cout << "Terminal - What is your name, " << Role << "?" << endl;
		cout << RESET;

		cout << ":> ";
		cin.ignore();
		getline(cin, Name);

		cout << endl << "Computing..." << endl;

		cout << BLUE << endl;
		cout << "Terminal - Welcome aboard, " << Name << "." << endl;
		cout << RESET;

		return Name;
	}
}

void Medic(string Name)
{
	cout << endl << "You stand up from the terminal." << endl;
	Non_Player_Message("You grab your uniform, and put it on.", 1500);
	cout << endl << endl;

	cout << "There are 500 souls on this ship. The majority are heavily injured." << endl;
	cout << "Your goal is to save everyone you can." << endl;

	Interface_Introduction();
	Scene_Medic1(Name);
	Scene_Medic2(Name);
	if (Scene_Medic3(Name) == 2)
	{
		Non_Player_Message("You have completed the Medic storyline. This is all that is available in the Early Access version (Semester 1).", 2000);
		Non_Player_Message("Thank you for playing!", 2000);
		exit(0);
	}
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
		cout << "Commands will be typed (i.e. 'look')." << endl;
		cout << "If there's a complex command, each part of the command will be separated by a space (i.e. 'heal soldier')." << endl;
		cout << "At any point, if you would like to quit, type 'QUIT'. Commands are case sensitive." << endl;
		cout << "If you need to get the description of the room/what's happening, type 'info'." << endl;
		cout << "For a valid list of commands, type 'cmd'." << endl;

		return;
	}
	else
	{
		return;
	}
}

void Scene_Medic1(string Name)
{
	string Command;
	bool Medkit_Obtained = false;

	Non_Player_Message("You walk out of the medbay, and into the main hallway of the ship.", 2000);
	Non_Player_Message("The lights flicker, and the sound of groaning can be heard from all around.", 3000);
	Non_Player_Message("You see injured crew members lying on the ground, some unconscious, others suffering in pain.", 3000);
	Non_Player_Message("What do you do?", 1500);

	cout << ":> ";
	cin.ignore(99999, '\n');
	getline(cin, Command);
	transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });

	while (true)
	{
		if (Command == "look" || Command == "info")
		{
			Non_Player_Message("You see a group of injured crew members. One is clutching his leg, another is unconscious, and a third is bleeding heavily from a head wound.", 3000);
			Non_Player_Message("There is a medkit lying on the ground nearby.", 2000);
			cout << ":> ";
			getline(cin, Command);
			transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });
		}
		else if (Command == "take medkit")
		{
			if (!Medkit_Obtained)
			{
				Non_Player_Message("You pick up the medkit. It contains bandages, antiseptic, and painkillers.", 2000);
				Medkit_Obtained = true;
			}
			else
			{
				Non_Player_Message("You already have the medkit.", 1500);
			}
			cout << ":> ";
			getline(cin, Command);
			transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });
		}
		else if (Command == "heal soldier")
		{
			Non_Player_Message("You quickly assess the situation and begin treating the most critical injuries first.", 3000);
			Non_Player_Message("Using your medical training, you manage to stabilize the injured crew members one by one.", 3000);
			Non_Player_Message("After what feels like hours, you have successfully treated all the injured crew members in the area.", 3000);
			Non_Player_Message("You feel a sense of accomplishment knowing that you have saved lives in this dire situation.", 2000);
			break;
		}
		else if (Command == "QUIT")
		{
			Non_Player_Message("Quitting the game...", 1000);
			exit(0);
		}
		else if (Command == "cmd")
		{
			Non_Player_Message("Valid commands are: look, info, take medkit, heal soldier, cmd, QUIT", 2000);
			cout << ":> ";
			getline(cin, Command);
			transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });
		
		}
		else
		{
			Non_Player_Message("Invalid command. Commands must be lower cased.", 1500);
			cout << ":> ";
			getline(cin, Command);
			transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });
		}
	}

	Non_Player_Message("With the immediate threats handled, you take a moment to catch your breath.", 2000);
	Non_Player_Message("The ship is still in chaos, but you have made a significant difference here.", 2000);
	Non_Player_Message("You know there are more crew members out there who need your help.", 2000);
	Non_Player_Message("Determined to continue your mission, you prepare to move on to the next area of the ship.", 2000);
	return;
}

void Scene_Medic2(string Name)
{
	string Command;
	bool Antidote_Obtained = false;

	Non_Player_Message("You enter another section of the ship, where the situation seems even more dire.", 2000);
	Non_Player_Message("You see crew members exhibiting strange symptoms, some are disoriented, while others are convulsing.", 3000);
	Non_Player_Message("It appears that a mysterious illness is spreading rapidly among the crew.", 3000);
	Non_Player_Message("What do you do?", 1500);

	cout << ":> ";
	cin.ignore(9999, '\n');
	getline(cin, Command);
	transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });

	while (true)
	{
		if (Command == "look" || Command == "info")
		{
			Non_Player_Message("You see a group of afflicted crew members. One is disoriented, another is convulsing, and a third is vomiting uncontrollably.", 3000);
			Non_Player_Message("There is an antidote vial lying on a nearby table.", 2000);
			cout << ":> ";
			getline(cin, Command);
			transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });
		}
		else if (Command == "take antidote")
		{
			if (!Antidote_Obtained)
			{
				Non_Player_Message("You pick up the antidote vial. It contains a serum that can counteract the mysterious illness.", 2000);
				Antidote_Obtained = true;
			}
			else
			{
				Non_Player_Message("You already have the antidote vial.", 1500);
			}
			cout << ":> ";
			getline(cin, Command);
			transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });
		}
		else if (Command == "administer antidote")
		{
			Non_Player_Message("You quickly administer the antidote to the afflicted crew members.", 3000);
			Non_Player_Message("Using your medical expertise, you manage to stabilize them and alleviate their symptoms.", 3000);
			Non_Player_Message("After some time, you have successfully treated all the afflicted crew members in the area.", 3000);
			Non_Player_Message("You feel a sense of relief knowing that you have contained the spread of the illness.", 2000);
			break;
		}
		else if (Command == "QUIT")
		{
			Non_Player_Message("Quitting the game...", 1000);
			exit(0);
		}
		else if (Command == "cmd")
		{
			Non_Player_Message("Valid commands are: look, info, take antidote, administer antidote, cmd, QUIT", 2000);
			cout << ":> ";
			getline(cin, Command);
			transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });
		}
		else
		{
			Non_Player_Message("Invalid command. Commands must be lower cased.", 1500);
			cout << ":> ";
			getline(cin, Command);
			transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });
		}
	}
}

int Scene_Medic3(string Name)
{
	string Command;

	Non_Player_Message("You enter the ship's laboratory, where you find the chief scientist in a critical condition.", 2000);
	Non_Player_Message("He is suffering from severe injuries and appears to be on the verge of death.", 3000);
	Non_Player_Message("You see the ship's captain suffering from a gunshot wound, bleeding heavily.", 3000);
	Non_Player_Message("Who do you pick?", 1500);

	cout << ":> ";
	cin.ignore(9999, '\n');
	getline(cin, Command);
	transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });

	while (true)
	{
		if (Command == "pick scientist")
		{
			Non_Player_Message("You quickly assess the chief scientist's injuries and begin administering emergency medical treatment.", 3000);
			Non_Player_Message("Using your advanced medical training, you manage to stabilize his condition and save his life.", 3000);
			Non_Player_Message("The chief scientist expresses his gratitude for your quick actions and dedication to saving lives.", 2000);
			Non_Player_Message("You turn to the captain to see him pointing his revolver at you.", 2000);

			cout << RED;
			Non_Player_Message("In a sudden and unexpected move, the captain pulls the trigger, ending your life instantly.", 3000);
			cout << RESET;
			Non_Player_Message("You have died.", 2000);
			exit(0);
		}
		else if (Command == "pick captain")
		{
			Non_Player_Message("You quickly assess the captain's gunshot wound and begin administering emergency medical treatment.", 3000);
			Non_Player_Message("Using your advanced medical training, you manage to stabilize his condition and save his life.", 3000);
			Non_Player_Message("The chief scientist lets out a final prayer, as he draws his last breath.", 2000);
			Non_Player_Message("You have saved the captain, but the chief scientist has died.", 2000);			
			return 2;
		}
		else if (Command == "QUIT")
		{
			Non_Player_Message("Quitting the game...", 1000);
			exit(0);
		}
		else if (Command == "cmd")
		{
			Non_Player_Message("Valid commands are: pick scientist, pick captain, cmd, QUIT", 2000);
			cout << ":> ";
			getline(cin, Command);
			transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });
		}
		else
		{
			Non_Player_Message("Invalid command. Commands must be lower cased.", 1500);
			cout << ":> ";
			getline(cin, Command);
			transform(Command.begin(), Command.end(), Command.begin(), [](unsigned char c) { return tolower(c); });
		}
	}
}