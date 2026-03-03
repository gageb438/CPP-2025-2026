#include <iostream>
#include <string>

using namespace std;

struct Pay_Roll
{
	int Employee_Number;
	string Name;
	double Hours;
	double Pay_Rate;
	double Gross_Pay;
};
struct Pay_Info
{
	string Name = "";
	int Hours = 0;
	double Pay_Rate = 0;
	string Days[3];
};
struct Date
{
	string Month, Day, Year;
};
struct Place
{
	string Address, City, State, Zip;
};
struct EmployeeInfo
{
	string Name, Employee_Number;
	Date Birthdate;
	Place Residence;
};
struct Inventory_Item
{
	int Part_Number, Units;
	double Price;
	string Description;
};


void Get_Item(Inventory_Item& Item);
void Show_Item(Inventory_Item Item);


int main()
{
	int choice;

	// what in the liam dowell
	cout << "choice :> ";
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		Pay_Roll Employee;
		
		cout << "Enter the employee number :> ";
		cin >> Employee.Employee_Number;
		
		cout << "Enter the employee name :> ";
		cin >> Employee.Name;

		cout << "Enter the employee payrate :> ";
		cin >> Employee.Pay_Rate;

		cout << "Enter the employee gross pay :> ";
		cin >> Employee.Gross_Pay;

		cout << "Enter the employee hours :> ";
		cin >> Employee.Hours;

		cout << "Employee " << Employee.Employee_Number << " overview." << endl;
		cout << "Name : " << Employee.Name << endl;
		cout << "Hours : " << Employee.Hours << endl;
		cout << "Payrate : " << Employee.Pay_Rate << endl;
		cout << "Gross Pay : " << Employee.Gross_Pay << endl;
		break;
	}
	case 2:
	{
		Pay_Info Employees[3]; 
		cout << "Enter the info for 3 employee's 3 days. " << endl;
		cout << endl;

		for (int Employee = 0; Employee < 3; Employee++)
		{
			cout << "Enter employee's name :> ";
			cin >> Employees[Employee].Name;
			cout << "Enter the employee's Pay Rate :> ";
			cin >> Employees[Employee].Pay_Rate;
			cout << "Enter the employee's Total Hours :> ";
			cin >> Employees[Employee].Hours;

			for (int Day = 0; Day < 3; Day++)
			{
				cout << "Enter the name of the day worked " << Day + 1 << " :> ";
				cin >> Employees[Employee].Days[Day];
			}
		}

		for (int Employee = 0; Employee < 3; Employee++)
		{
			cout << "Employee Overview " << Employees[Employee].Name << endl;
			cout << "Gross Pay :> $" << Employees[Employee].Hours * Employees[Employee].Pay_Rate << endl;
			cout << "Days Worked : " << endl;
			for (int Day = 0; Day < 3; Day++)
			{
				cout << "> " << Employees[Employee].Days[Day] << endl;
			}

			cout << endl;
		}
		break;
	}
	case 3:
	{
		EmployeeInfo Employee;

		cout << "Hello employee. Please fill out your new employee info card." << endl;
		cout << "Name :> ";
		cin >> Employee.Name;
		cout << "Employee Number :> ";
		cin >> Employee.Employee_Number;
		cout << "Birth Year :> ";
		cin >> Employee.Birthdate.Year;
		cout << "Birth Month :> ";
		cin >> Employee.Birthdate.Month;
		cout << "Birth Day :> ";
		cin >> Employee.Birthdate.Day;
		cout << "Home Zip :> ";
		cin >> Employee.Residence.Zip;
		cout << "Home State :> ";
		cin >> Employee.Residence.State;
		cout << "Home City :> ";
		cin >> Employee.Residence.City;
		cout << "Home Adress :> ";
		cout << "Here is the info you input : " << endl;
		cout << "Name : " << Employee.Name;
		cout << "Employee Number : " << Employee.Employee_Number << endl;
		cout << "Birthday : " << Employee.Birthdate.Month << " / " << Employee.Birthdate.Day << " / " << Employee.Birthdate.Year << endl;
		cout << "Residence : " << Employee.Residence.Address << ", " << Employee.Residence.City << " " << Employee.Residence.State << " " << Employee.Residence.Zip << endl;
		break;
	}
	case 4:
	{
		Inventory_Item My_Item;
		Get_Item(My_Item);
		Show_Item(My_Item);
		break;
	}
	case 5:
	{
		enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

		const int NUM_DAYS = 5;
		double Sales[NUM_DAYS];
		double Total = 0.0;
		int Index;

		for (Index = MONDAY; Index <= FRIDAY; Index++)
		{
			cout << "Enter the sales on " << Index << " :> ";
			cin >> Sales[Index];
		}
	}
	}
}

void Get_Item(Inventory_Item& Item)
{
	cout << "Enter the part number :> ";
	cin >> Item.Part_Number;
	cout << "Enter the description :> ";
	cin.ignore();
	getline(cin, Item.Description);
	cout << "Enter the number of units on hand :> ";
	cin >> Item.Units;
	cout << "Enter the price :> ";
	cin >> Item.Price;
}

void Show_Item(Inventory_Item Item)
{
	cout << "Part Number : " << Item.Part_Number << endl;
	cout << "Description : " << Item.Description << endl;
	cout << "Units on hand : " << Item.Units << endl;
	cout << "Price : $" << Item.Price << endl;
}