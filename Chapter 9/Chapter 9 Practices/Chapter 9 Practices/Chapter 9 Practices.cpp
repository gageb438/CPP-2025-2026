#include <iostream>
#include <memory>

using namespace std;

void getNumber(int* Number);
void doubleValue(int* Number);
void Get_Sales(double* Something, int SIZE);
double Total_Sales(double* Something, int SIZE);
int* Get_Random_Numbers(int Size);
void Display_Array(int og[], int* new_ar, int SIZE);
int* Duplicate_Array(int To_Copy[], int SIZE);
void Selection_Sort(int* Long_Array[], int Size);
void Swap(int& Pos1, int& Pos2);

int main()
{
	cout << "choice: ";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		// init
		int x = 25;

		// output the memory location, size, and value
		cout << "The variable x is stored at: " << &x << endl;
		cout << "The size of variable x is: " << sizeof(x) << endl;
		cout << "The value stored in x is: " << x << endl;

		break;
	}
	case 2:
	{
		int x = 25;
		int* ptr = nullptr;

		ptr = &x;

		cout << "var x stored at " << ptr << endl;
		cout << "var x size of " << sizeof(x) << endl;
		cout << "var x value " << x << endl;

		cout << "ptr loc " << ptr << endl;
		cout << "size of ptr " << sizeof(ptr) << endl;
		cout << "val of ptr " << ptr << endl;
		break;
	}
	case 3:
	{
		int x = 25;
		int* ptr = nullptr;

		ptr = &x;

		cout << "value of x printed twice: " << endl;
		cout << x << endl;
		cout << *ptr << endl;

		*ptr = 100;

		cout << "value of x printed twice" << endl;
		cout << x << endl;
		cout << *ptr << endl;

		break;
	}
	case 4:
	{
		int x = 25, y = 50, z = 75;
		int* ptr = nullptr;

		cout << "Here are the values of xyz, respectively: " << x << " " << y << " " << z << endl;

		ptr = &x;
		*ptr += 100;

		ptr = &y;
		*ptr += 100;
		
		ptr = &z;
		*ptr += 100;

		cout << "Here are the values of xyz, respectively: " << x << " " << y << " " << z << endl;
		break;
	}
	case 5:
	{
		short numbers[] = { 10, 20, 30, 40, 50 };
		
		cout << "first elmeent " << *numbers << endl;

		cout << "2nd element is : " << *(numbers + 1) << endl;
		break;
	}
	case 6:
	{
		const int SIZE = 5;
		int numbers[SIZE];
		int count;
		int* ptr = numbers;

		for (count = 0; count < SIZE; count++)
		{
			cout << "Enter a number: ";
			cin >> *(numbers + count);
		}

		cout << "Here are the numbers that you entered: " << endl;
		for (count = 0; count < SIZE; count++)
		{
			cout << *(numbers + count) << endl;
		}

		cout << "Press any key... " << endl;
		cin.ignore();
		cin.get();

		cout << "Here are also the numbers you enterede: " << endl;
		for (count = 0; count < SIZE; count++)
		{
			cout << ptr[count] << endl;
		}

		cout << "Press any key..." << endl;
		cin.get();

		cout << "Here, finally, are the numbers you entered : " << endl;
		for (count = 0; count < SIZE; count++)
		{
			ptr = &numbers[count];
			cout << *ptr << endl;
		}
		break;
	}
	case 7:
	{
		const int SIZE = 8;
		int set[SIZE] = { 5,10,15,20,25,30,35,40 };

		int* numPtr = set;
		int count;

		cout << "The numbers ascending are: " << endl;
		for (count = 0; count < SIZE; count++)
		{
			cout << *numPtr << " ";
			numPtr++;
		}

		cout << endl << "The numbers descending are : " << endl;
		for (count = 0; count < SIZE; count++)
		{
			numPtr--;
			cout << *numPtr << " ";
		}
		break;
	}
	case 8:
	{
		int number;

		getNumber(&number);
		doubleValue(&number);

		cout << "The number you entered has been doubled." << endl;
		cout << "It is now : " << number << endl;
		break;
	}
	case 9:
	{
		const int SIZE = 4;
		double Quarterly_Sales[SIZE];
		
		Get_Sales(Quarterly_Sales, SIZE);
		int TOTAL = Total_Sales(Quarterly_Sales, SIZE);
		cout << "The total was $" << TOTAL << endl;

		break;
	}
	case 10:
	{
		int* Numbers = nullptr;

		Numbers = Get_Random_Numbers(5);

		for (int Count = 0; Count < 5; Count++)
		{
			cout << Numbers[Count] << endl;
		}

		delete[] Numbers;
		Numbers = nullptr;

		break;
	}
	case 11:
	{
		const int SIZE = 8;
		int something1[SIZE] = { 1,2,3,4,5,6,7,8 };
		int something2[SIZE] = { 8,7,6,5,4,3,2,1 };
		int something3[SIZE] = { 5,4,3,2,1,7,8,6 };

		int* copy1 = Duplicate_Array(something1, SIZE);
		int* copy2 = Duplicate_Array(something2, SIZE);
		int* copy3 = Duplicate_Array(something3, SIZE);

		Display_Array(something1, copy1, SIZE);
		Display_Array(something2, copy2, SIZE);
		Display_Array(something3, copy3, SIZE);

		break;
	}
	case 12:
	{
		unique_ptr<int> ptr(new int);
		*ptr = 99;
		cout << *ptr << endl;
		break;
	}
	case 13:
	{
		int max;
		cout << "How many numbers do you wish to enter? ";
		cin >> max;
		unique_ptr<int[]> ptr(new int[max]);
		for (int index = 0; index < max; index++)
		{
			cout << "Enter an integer number: ";
			cin >> ptr[index];
		}

		cout << "Here are the values you entered: " << endl;
		for (int index = 0; index < max; index++)
		{
			cout << ptr[index] << endl;
		}

		break;
	}
	case 14:
	{
		const int size = 15;
		int donations[size] = {5, 100, 5, 25, 10, 5, 35, 5, 5, 100, 10, 15, 10, 5, 10};
		int* pointer_array[size] = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr };

		for (int index = 0; index < size; index++)
		{
			pointer_array[index] = &donations[index];
		}

		cout << "Original : { ";

		for (int index = 0; index < size; index++)
		{
			cout << *pointer_array[index] << " ";
		}

		cout << "}" << endl;

		Selection_Sort(pointer_array, size);

		cout << "Sorted : { ";

		for (int index = 0; index < size; index++)
		{
			cout << *pointer_array[index] << " ";
		}

		cout << "}" << endl;

		break;
	}
	}
}

void getNumber(int* Number)
{
	cout << "Input a number: ";
	cin >> *Number;
}
void doubleValue(int* Number)
{
	*Number *= 2;
}

void Get_Sales(double* Quarterly_Sales, const int SIZE)
{
	for (int Counter = 0; Counter < SIZE; Counter++)
	{
		double Sales;
		cout << "Enter the sales for quarter " << Counter << " : ";
		cin >> Sales;

		*Quarterly_Sales = Sales;
		Quarterly_Sales++;
	}
}

double Total_Sales(double* Quarterly_Sales, const int SIZE)
{
	double TOTAL = 0;

	for (int Counter = 0; Counter < SIZE; Counter++)
	{
		TOTAL += *Quarterly_Sales;
		Quarterly_Sales++;
	}

	return TOTAL;
}

int* Get_Random_Numbers(int Size)
{
	int* Array = nullptr;

	if (Size <= 0)
	{
		return nullptr;
	}

	Array = new int[Size];

	srand(time(0));

	for (int Count = 0; Count < Size; Count++)
	{
		Array[Count] = rand();
	}

	return Array;
}

int* Duplicate_Array(int To_Copy[], int SIZE)
{
	int* Copied = new int[SIZE];

	for (int Pos = 0; Pos < SIZE; Pos++)
	{
		Copied[Pos] = To_Copy[Pos];
	}

	return Copied;
}

void Display_Array(int OG[], int* NEW, int SIZE)
{
	cout << "Original : { ";

	for (int pos = 0; pos < SIZE; pos++)
	{
		cout << OG[pos] << " ";
	}

	cout << "}" <<  endl;

	cout << "Copied : { ";

	for (int pos = 0; pos < SIZE; pos++)
	{
		cout << *NEW << " ";
		NEW++;
	}

	cout << "}" << endl;
}

void Selection_Sort(int* Long_Array[], int Size)
{
	int Min;

	for (int Position = 0; Position < Size; Position++)
	{
		Min = Position;

		for (int Checking = Position + 1; Checking < Size; Checking++)
		{
			if (*Long_Array[Checking] <= *Long_Array[Min])
			{
				Min = Checking;
			}
		}

		Swap(*Long_Array[Min], *Long_Array[Position]);
	}
}

void Swap(int& Pos1, int& Pos2)
{
	int Temporary = Pos1;
	Pos1 = Pos2;
	Pos2 = Temporary;
}