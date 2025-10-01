#include <iostream>

using namespace std;

int main()
{
	do
	{
		// define variable for menu choice
		int choice = 0;

		// display the menu to the user
		cout << "Welcome to the Chapter 4 Exercise Menu" << endl;
		cout << "Please choose from the following choices:" << endl;
		cout << "1.\tExercise # - ##" << endl;
		cout << "2.\tQuit" << endl;

		// get input from the user
		cout << ":> ";
		cin >> choice;
		cout << "------------------------------------" << endl;

		// switch
		switch (choice)
		{
		case 1:
		{
			cout << "Exercise # - ##";

			// code.

			break;
		}
		case 2:
		{
			cout << "Exercise # - ##";

			// code.

			break;
		}
		case 3:
		{
			cout << "Exercise # - ##";

			// code.

			break;
		}
		case 4:
		{
			cout << "Exercise # - ##";

			// code.

			break;
		}
		case 5:
		{
			cout << "Exercise # - ##";

			// code.

			break;
		}
		case 6:
		{
			cout << "Exercise # - ##";

			// code.

			break;
		}
		}
		
	} while (choice < 1 || choice > 2)
	
}