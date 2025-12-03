#include <iostream>

using namespace std;

int menu(int programs);
void Grade_Book();
//void World_Series();
void Tic_Tac_Main();

int main()
{
	int num = 9;

	do
	{
		num = menu(6);

		switch (num)
		{
		case 1:
		{
			Grade_Book();
			break;
		}
		case 2:
		{
			//World_Series();
			break;
		}
		case 3:
		{
			Tic_Tac_Main();
			break;
		}
		}
	} while (num < 6);
}