#include <iostream>

using namespace std;

int Menu(int programs)
{
	int choice = -1;

	cout << "Program choices:" << endl;

	for (int count = 1; count <= programs; count++)
	{

		cout << "Program " << count << "\t: " << count << endl;
	}
	cout << "Exit Program \t: " << programs + 1 << endl;
	cout << "----------------------" << endl;
	
	while (choice < 1 || choice > programs + 1)
	{
		cout << "Menu Choice :> ";
		cin >> choice;
	}
	return choice;
}