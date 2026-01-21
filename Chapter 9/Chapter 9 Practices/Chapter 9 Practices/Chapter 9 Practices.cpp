#include <iostream>

using namespace std;

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
	}
}