#include <iostream>

using namespace std;

class Player
{
public:
	string Name = "Unnamed Surveyor";
	int Sanity = 100;

	void Init()
	{

	}
	void Display_Status()
	{
		cout << "Player Name: " << Name << endl;
		cout << "Sanity Level: " << Sanity << endl;
	}

};