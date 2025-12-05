#include <iostream>

using namespace std;

int menu(int programs);
void Grade_Book();
void World_Series();
void Eight_Ball();
void Tic_Tac_Main();
void Average_Gas_Prices();

int main()
{
	int num = 9;

	do
	{
		num = menu(5);

		switch (num)
		{
		case 1:
		{
			Grade_Book();
			break;
		}
		case 2:
		{
			World_Series();
			break;
		}
		case 3:
		{
			Tic_Tac_Main();
			break;
		}
		case 4:
		{
			Eight_Ball();
			break;
		}
		case 5:
		{
			Average_Gas_Prices();
			break;
		}
		}
	} while (num < 6);
}