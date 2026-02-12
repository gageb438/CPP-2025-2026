#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void Program_10_1();

void Program_10_2_A();
bool Program_10_2_B(char Customer_Number_Array[], int SIZE);

void Program_10_3();

void Program_10_5();

void Program_10_6();

void Program_10_7();

int main()
{
	return 0;
}


void Program_10_1()
{
	char User_Input;

	cout << "Enter a character: ";
	cin.get(User_Input);

	if (isalpha(User_Input))
	{
		cout << "This is a alpha character." << endl;

		if (isupper(User_Input))
		{
			cout << "This is a uppercase character." << endl;
		}
		else
		{
			cout << "This is a lowercase character." << endl;
		}
	}
	else if (isdigit(User_Input))
	{
		cout << "This is a digit." << endl;
	}
	else if (ispunct(User_Input))
	{
		cout << "This is a punctuation mark." << endl;
	}

	if (isprint(User_Input))
	{
		cout << "This is a printable character." << endl;
	}
}


void Program_10_2_A()
{
	const int SIZE = 8;
	string Customer_Number_String;
	char Customer_Number_Array[SIZE];

	cout << "Please input your customer number in the format of ###@@@@ (8 digits): ";
	cin >> Customer_Number_String;

	if (Customer_Number_String.length() != SIZE)
	{
		cout << "Invalid customer number!" << endl;
		return;
	}

	for (int Counting = 0; Counting < SIZE; Counting++)
	{
		Customer_Number_Array[Counting] = Customer_Number_String[Counting];
	}

	if (Program_10_2_B(Customer_Number_Array, SIZE))
	{
		cout << "That is a valid customer number." << endl;
	}
	else
	{
		cout << "Invalid customer number!" << endl;
	}

}

bool Program_10_2_B(char Customer_Number_Array[], int SIZE)
{
	for (int Count = 0; Count < SIZE; Count++)
	{
		if (Count <= 2)
		{
			if (isalpha(Customer_Number_Array[Count]))
			{
				continue;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (isdigit(Customer_Number_Array[Count]))
			{
				continue;
			}
			else
			{
				return false;
			}
		}
	}

	return true;
}


void Program_10_3()
{
	char User_Input;

	cout << "Please input a character to be turned into an uppercase character: ";
	cin.get(User_Input);

	cout << User_Input << " as a uppercase character is " << toupper(User_Input) << "." << endl;
	cout << User_Input << " as a lowercase character is " << tolower(User_Input) << "." << endl;
}


void Program_10_5()
{
	const int SIZE = 80;
	char line[SIZE];
	int count = 0;

	cout << "Enter a sentence, no longer than 79 characters." << endl;
	cin.getline(line, SIZE);

	while (line[count] != '\0')
	{
		cout << line[count];
		count++;
	}
	cout << endl;
}


void Program_10_6()
{
	const int SIZE = 5;
	const int LENGTH = 27;
	char products[SIZE][LENGTH] = { "TVB72 72 - inch television", "BRP98 Blu-Ray Player", "CS101 Car Stereo", "SUB120 Subwoofer", "GPC76 Gaming PC" };
	char Look_Up[LENGTH];
	char* str_Ptr = nullptr;
	int index;

	cout << "Enter a product number to search for: ";
	cin.getline(Look_Up, LENGTH);

	for (int Index = 0; Index < SIZE; Index++)
	{
		str_Ptr = strstr(products[Index], Look_Up);
		if (str_Ptr != nullptr)
		{
			break;
		}
	}

	if (str_Ptr != nullptr)
	{
		cout << "Product found: " << str_Ptr << endl;
	}
	else
	{
		cout << "No product found matching that search criteria." << endl;
	}
}


void Program_10_7()
{
	const int SIZE = 30;
	char Name_1[SIZE], Name_2[SIZE];

	do
	{
		cout << "Enter a name (last, first): ";
		cin.getline(Name_1, SIZE);
		cout << "Enter a second name (last, first): ";
		cin.getline(Name_2, SIZE);

		cout << endl << "Here are the two names you entered, alphabetically." << endl;
		if (strcmp(Name_1, Name_2) < 0)
		{
			cout << Name_1 << endl << Name_2 << endl;
		}
		else if (strcmp(Name_1, Name_2) > 0)
		{
			cout << Name_2 << endl << Name_1 << endl;
		}
		else
		{
			cout << "You entered the same name twice!" << endl;
		}
		cout << endl;
	} while (Name_1 != "enld");
}

