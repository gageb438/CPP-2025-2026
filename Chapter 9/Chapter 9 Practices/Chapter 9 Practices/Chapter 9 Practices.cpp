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

	}
	}
}