#include <iostream>
#include <fstream>

using namespace std;

int Menu(int Programs);

void Linear_Charge_Account_Validation();
void Binary_Charge_Account_Validation();
void String_Selection_Sort();
void Sorting_Orders();

void Bubble_Sort(int Long_Array[], int Size);
void Selection_Sort(int Long_Array[], int Size);
void Selection_Sort(string Long_Array[], int Size);
void Selection_Sort_Display(int Long_Array[], int Size);

void Swap(int& Pos1, int& Pos2);
void Swap(string& Pos1, string& Pos2);

int main()
{
	while (true)
	{
		cout << endl;
		int Choice = Menu(4);

		switch (Choice)
		{
		case 1:
			Linear_Charge_Account_Validation();
			break;
		case 2:
			Binary_Charge_Account_Validation();
			break;
		case 3:
			String_Selection_Sort();
			break;
		case 4:
			Sorting_Orders();
			break;
		case 5:
			cout << "Exiting program..." << endl;
			return 0;
		}
	}
}

void Linear_Charge_Account_Validation()
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

void Binary_Charge_Account_Validation()
{
	int ACCOUNT_NUMBERS[18] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

	Selection_Sort(ACCOUNT_NUMBERS, 18);
	while (true)
	{
		bool Found = false;
		int Pivot = 9;
		int UserID;
		int Low = 0;
		int High = 17;

		cout << "Input your account number to search for (1111111 to quit.) :> ";
		cin >> UserID;

		while (Low <= High)
		{
			int Size = (Low + High) / 2;

			if (UserID == ACCOUNT_NUMBERS[Size])
			{
				cout << "Account ID valid." << endl;
				Found = true;
				break;
			}
			else if (UserID < ACCOUNT_NUMBERS[Size])
			{
				High = Size - 1;
			}
			else
			{
				Low = Size + 1;
			}
		}
		if (UserID == 1111111)
		{
			return;
		}
		else if (!Found)
		{
			cout << "Account ID invalid." << endl;
		}
	}
}

void String_Selection_Sort()
{
	string Names[] = { "Venkman, Peter", "Took, Peregrin", "Pinkman, Jesse", "Simpson, Bart", "Allen, Tom", "McFly, Marty", "Solo, Han", "Baggins, Bilbo", "Griffin, Peter", "White, Walter", "Organa, Leia", "Brown, Emmet", "Fudd, Elmer", "Uzumaki, Naruto", "Skywalker, Luke", "Jones, Indiana", "Callahan, Harold", "Gamgee, Samwise", "Fring, Gustavo", "Kenobi, Ben" };
	ofstream Sorted_Names("sortednames.txt");
	
	Selection_Sort(Names, 20);

	for (int pos = 0; pos < 20; pos++)
	{
		Sorted_Names << Names[pos] << endl;
	}

	Sorted_Names.close();
	cout << "Names have been sorted and written to 'sortednames.txt'." << endl;
}

void Sorting_Orders()
{
	int Array1[] = { 44, 10, 71, 26, 89, 52, 35, 63 };
	int Array2[] = { 63, 35, 10, 89, 26, 71, 44, 52 };

	cout << "Array 1 before Bubble Sort: ";

	for (int Count = 0; Count < 8; Count++)
	{
		cout << Array1[Count] << " ";
	}
	cout << endl;

	Bubble_Sort(Array1, 8);

	cout << "Array 1 after Bubble Sort: ";
	for (int Count = 0; Count < 8; Count++)
	{
		cout << Array1[Count] << " ";
	}
	cout << endl << endl;

	cout << "Array 2 before Selection Sort: ";
	for (int Count = 0; Count < 8; Count++)
	{
		cout << Array2[Count] << " ";
	}
	cout << endl;

	Selection_Sort_Display(Array2, 8);

	cout << "Array 2 after Selection Sort: " << endl;
	for (int Count = 0; Count < 8; Count++)
	{
		cout << Array2[Count] << " ";
	}
	cout << endl;
}

void Bubble_Sort(int Long_Array[], int Size)
{
	int Max_Element;
	int Index;

	for (Max_Element = Size - 1; Max_Element > 0; Max_Element--)
	{
		for (Index = 0; Index < Max_Element; Index++)
		{
			if (Long_Array[Index] > Long_Array[Index + 1])
			{
				Swap(Long_Array[Index], Long_Array[Index + 1]);
			}
			cout << "Current array mid sort : ";

			for (int Pos = 0; Pos < Size; Pos++)
			{
				cout << Long_Array[Pos] << " ";
			}
			cout << endl;

			int Former = Long_Array[0];
			bool Caught = false;

			for (int Pos = 0; Pos < Size; Pos++)
			{
				if (Former > Long_Array[Pos])
				{
					Caught = true;
					break;
				}

				Former = Long_Array[Pos];
			}
			if (!Caught)
			{
				return;
			}
		}
	}
}

void Selection_Sort(int Long_Array[], int Size)
{
	int Min;

	for (int Position = 0; Position < Size; Position++)
	{
		Min = Position;

		for (int Checking = Position + 1; Checking < Size; Checking++)
		{
			if (Long_Array[Checking] <= Long_Array[Min])
			{
				Min = Checking;
			}
		}

		Swap(Long_Array[Min], Long_Array[Position]);
	}
}

void Selection_Sort(string Long_Array[], int Size)
{
	int Min;

	for (int Position = 0; Position < Size; Position++)
	{
		Min = Position;

		for (int Checking = Position + 1; Checking < Size; Checking++)
		{
			if (Long_Array[Checking][0] <= Long_Array[Min][0])
			{
				Min = Checking;
			}
		}

		Swap(Long_Array[Min], Long_Array[Position]);
	}
}

void Selection_Sort_Display(int Long_Array[], int Size)
{
	int Min;

	for (int Position = 0; Position < Size; Position++)
	{
		Min = Position;

		for (int Checking = Position + 1; Checking < Size; Checking++)
		{
			if (Long_Array[Checking] <= Long_Array[Min])
			{
				Min = Checking;
			}
		}

		Swap(Long_Array[Min], Long_Array[Position]);

		cout << "Current array mid sort : ";
		for (int Pos = 0; Pos < Size; Pos++)
		{
			cout << Long_Array[Pos] << " ";
		}
		cout << endl;

		int Former = Long_Array[0];
		bool Caught = false;

		for (int Pos = 0; Pos < Size; Pos++)
		{
			if (Former > Long_Array[Pos])
			{
				Caught = true;
				break;
			}

			Former = Long_Array[Pos];
		}
		if (!Caught)
		{
			return;
		}
	}
}

void Swap(int& Pos1, int& Pos2)
{
	int Temporary = Pos1;
	Pos1 = Pos2;
	Pos2 = Temporary;
}

void Swap(string& Pos1, string& Pos2)
{
	string Temporary = Pos1;
	Pos1 = Pos2;
	Pos2 = Temporary;
}