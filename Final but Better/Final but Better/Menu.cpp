#include <iostream>

using namespace std;

// github copilot auto filled these, w copilot.
// so i did some research and I found this website that seems to be more accurate https://talyian.github.io/ansicolors/
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define PURPLE "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"

// btw for later, these all need to be colored seperately, theres no way to compoud outputs to my knowledge.
#define BOLD "\x1b[1m"
#define RESET_BOLD "\x1b[0m"

void Credits();

void Menu()
{
	/*
	Displays a menu that i spent like 5 minutes formatting that i took from this website
	because I KNOW you will forget about it incase something happens
	stupid gage.
	https://patorjk.com/software/taag/#p=display&f=Big&t=%2F%2B--------%2B%5C%0A%7C+The+False+Stars+%7C%0A%5C%2B--------%2B%2F%0A&x=none&v=4&h=4&w=80&we=false

	####################################
	IF SOMETHING HAPPENS, IT SHOULD LOOK LIKE THIS:
		cout << "      __                                                               __      " << endl <<
		"     / /_                                                             _\\ \\     " << endl <<
		"    / /| |_ ______ ______ ______ ______ ______ ______ ______ ______ _| |\\ \\    " << endl <<
		"   / /_   _|______|______|______|______|______|______|______|______|_   _\\ \\   " << endl <<
		"  / /  |_|                                                           |_|  \\ \\  " << endl <<
		" /_/  _______ _            ______    _             _____ _                 \\_\\ " << endl <<
		" | | |__   __| |          |  ____|  | |           / ____| |                 | |" << endl <<
		" | |    | |  | |__   ___  | |__ __ _| |___  ___  | (___ | |_ __ _ _ __ ___  | |" << endl <<
		" | |    | |  | '_ \\ / _ \\ |  __/ _` | / __|/ _ \\  \\___ \\| __/ _` | '__/ __| | |" << endl <<
		" | |    | |  | | | |  __/ | | | (_| | \\__ \\  __/  ____) | || (_| | |  \\__ \\ | |" << endl <<
		" | |    |_|  |_| |_|\\___| |_|  \\__,_|_|___/\\___| |_____/ \\__\\__,_|_|  |___/ | |" << endl <<
		" | |                                                                        | |" << endl <<
		" |_|                                                                        |_|" << endl <<
		" \\ \\    _                                                             _    / / " << endl <<
		"  \\ \\ _| |_ ______ ______ ______ ______ ______ ______ ______ ______ _| |_ / /  " << endl <<
		"   \\ \\_   _|______|______|______|______|______|______|______|______|_   _/ /   " << endl <<
		"    \\ \\|_|                                                           |_|/ /    " << endl <<
		"     \\_\\                                                               /_/     " << endl;
	####################################

	pray i dont delete this file or i might cry
	*/
	
	// initialize my variables, i really didnt need to say this but for the sake of me needing to put more comments,
	int Choice = 0;

	cout << "      __                                                               __      " << endl <<
		"     / /_                                                             _\\ \\     " << endl <<
		"    / /| |_ ______ ______ ______ ______ ______ ______ ______ ______ _| |\\ \\    " << endl <<
		"   / /_   _|______|______|______|______|______|______|______|______|_   _\\ \\   " << endl <<
		"  / /  |_|                                                           |_|  \\ \\  " << endl <<
		" /_/  _______ _            ______    _             _____ _                 \\_\\ " << endl <<
		" | | |__   __| |          |  ____|  | |           / ____| |                 | |" << endl <<
		" | |    | |  | |__   ___  | |__ __ _| |___  ___  | (___ | |_ __ _ _ __ ___  | |" << endl <<
		" | |    | |  | '_ \\ / _ \\ |  __/ _` | / __|/ _ \\  \\___ \\| __/ _` | '__/ __| | |" << endl <<
		" | |    | |  | | | |  __/ | | | (_| | \\__ \\  __/  ____) | || (_| | |  \\__ \\ | |" << endl <<
		" | |    |_|  |_| |_|\\___| |_|  \\__,_|_|___/\\___| |_____/ \\__\\__,_|_|  |___/ | |" << endl <<
		" | |                                                                        | |" << endl <<
		" |_|                                                                        |_|" << endl <<
		" \\ \\    _                                                             _    / / " << endl <<
		"  \\ \\ _| |_ ______ ______ ______ ______ ______ ______ ______ ______ _| |_ / /  " << endl <<
		"   \\ \\_   _|______|______|______|______|______|______|______|______|_   _/ /   " << endl <<
		"    \\ \\|_|                                                           |_|/ /    " << endl <<
		"     \\_\\                                                               /_/     " << endl;
	//#########################################
	// figure out how to use emojis in console if I have time
	//#########################################

	cout << endl << endl << BOLD << "Welcome to the Quiet War!" << RESET_BOLD << endl;
	cout << "1.  Start New Game" << endl;
	cout << "2.  Load Game" << endl;
	cout << "3.  Credits" << endl;
	cout << "4.  Exit" << endl;

	while (true)
	{
		cout << endl << YELLOW << "Please make a choice (1-4):" << RESET << endl;

		while (Choice < 1 || Choice > 4)
		{
			cout << ":> ";
			cin >> Choice;

			if (Choice < 1 || Choice > 4)
			{
				cout << endl << RED << "Invalid choice. Please select a valid option." << RESET << endl << endl;
			}
		}

		switch (Choice)
		{
		case 1:
		{
			// unfinished
			break;
		}
		case 2:
		{
			// unfinished
			break;
		}
		case 3:
		{
			Credits();
			break;
		}
		case 4:
		{
			// sad to see them go, woudl've loved the feedback (why do i write these comments)
			cout << endl << GREEN << "Thank you for playing The False Star!" << RESET << endl << endl;
			exit(0);
			cout << "if you see this just shut your console, idk why it didnt work.";
		}
		}

		Choice = 0; // reset choice so the loop can run that block again
	}
}

void Credits()
{
	cout << endl << BOLD << "Credits" << RESET_BOLD << endl;
	cout << "Basically everything: Gage Boyd" << endl;
	cout << "ASCII Art: patorjk.com/software/taag/" << endl;
	cout << "ANSI Color Codes Reference: talyian.github.io/ansicolors/" << endl;
	cout << "Thanks to github copilot for suggesting me horrible ideas." << endl << endl;
}