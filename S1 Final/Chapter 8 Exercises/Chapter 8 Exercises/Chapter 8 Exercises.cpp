#include <iostream>

using namespace std;

int QuickSort(int Long_Array[], int Start, int End);
void LinearChargeAccountValidation();
void BinaryChargeAccountValidation();


int main()
{
	LinearChargeAccountValidation();
}

void LinearChargeAccountValidation()
{
	int ACCOUNT_NUMBERS[18] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

	while (true)
	{
		bool Found = false;
		int Users_Number;

		cout << "Input your account number to search for (1111111 to quit.) :> ";
		cin >> Users_Number;

		if (Users_Number == 1111111)
		{
			return;
		}
		else
		{
			for (int Pos = 0; Pos < 18; Pos++)
			{
				if (ACCOUNT_NUMBERS[Pos] == Users_Number)
				{
					Found = true;
					break;
				}
			}
		}

		if (Found)
		{
			cout << "Your account number is valid." << endl;;
		}
		else
		{
			cout << "Your account number is invalid." << endl;
		}
	}
}

void BinaryChargeAccountValidation()
{
	int ACCOUNT_NUMBERS[18] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

	// sorting

	while (true)
	{
		bool Found = false;
		int Users_Number;

		cout << "Input your account number to search for (1111111 to quit.) :> ";
		cin >> Users_Number;

		if (Users_Number == 1111111)
		{
			return;
		}
		else
		{
			for (int Pos = 0; Pos < 18; Pos++)
			{
				if (ACCOUNT_NUMBERS[Pos] == Users_Number)
				{
					Found = true;
					break;
				}
			}
		}

		if (Found)
		{
			cout << "Your account number is valid." << endl;;
		}
		else
		{
			cout << "Your account number is invalid." << endl;
		}
	}
}

int QuickSort(int Long_Array[], int Start, int End)
{

	return 0;
}