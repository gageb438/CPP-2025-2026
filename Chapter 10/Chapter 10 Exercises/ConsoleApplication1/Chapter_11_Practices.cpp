#include <iostream>

using namespace std;

struct Pay_Roll
{
	int Employee_Number;
	string Name;
	double Hours;
	double Pay_Rate;
	double Gross_Pay;
};

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
	}
	}
}