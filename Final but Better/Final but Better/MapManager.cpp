#include <iostream>
 
using namespace std;

class Map
{
public:
	static const int SizeX = 10;
	static const int SizeY = 10;
	string Name = "Chimera Galaxy";
	string Map_Tiles[SizeX][SizeY];

	void Init()
	{
		for (int X = 0; X < SizeX; X++)
		{
			for (int Y = 0; Y < SizeY; Y++)
			{
				Map_Tiles[X][Y] = "*";
			}
		}
	}

	void Display_Map_Info()
	{
		cout << "Map Name: " << Name << endl;
		cout << "Map Size: " << SizeX << " x " << SizeY << endl;
	}
	void Display_Map()
	{
		// build the top borders and numbers
		for (int X = 0; X < SizeX; X++)
		{
			if (X == 0)
			{
				cout << "   " << X;
			}
			else
			{
				cout << "     " << X;
			}
		}
		cout << endl;
		for (int X = 0; X < SizeX; X++)
		{
			cout << " _____";
		}
		cout << endl;

		// generate the rows
		for (int Y = 0; Y < SizeY; Y++)
		{
			for (int Count1 = 0; Count1 != 2; Count1++)
			{
				for (int X = 0; X < SizeX; X++)
				{
					if (Count1 == 1)
					{
						cout << "|  " << X << "  |";
						if (X == SizeX - 1)
						{
							cout << " " << Y;
							cout << endl;
						}
					}

					else
					{
						if (X == 0)
						{
							cout << "|     |";
						}
						else
						{
							cout << "     |";
						}
						cout << endl;
					}
				}
			}
		}
		
		/*
		
			   #     #     #     #     #     #     #     #     #     #
			 _____ _____ _____ _____ _____ _____ _____ _____ _____ _____
			|     |     |     |     |     |     |     |     |     |     |
		#	|     |     |     |     |     |     |     |     |     |     |
			|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|

		*/
	}
};