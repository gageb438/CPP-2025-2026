#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void Program_10_1();

void Program_10_2_A();
bool Program_10_2_B(char Customer_Number_Array[], int SIZE);

void Program_10_3();

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


