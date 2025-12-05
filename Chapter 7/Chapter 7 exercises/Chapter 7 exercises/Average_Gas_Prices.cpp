#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void Average_Gas_Prices()
{
	int Month_Counter = 0;
	int Month_Week_Amounts[12] = { 5, 4, 4, 4, 3, 4, 4, 5, 4, 5, 4, 4 };
	double Lowest = 99999999999.00;
	double Highest = -1.00;
	string line;
	string Lowest_Month;
	string Highest_Month;
	vector<double> Price_List = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector<double> Average_List = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	const int Const_Month_Week_Amounts[12] = { 5, 4, 4, 4, 3, 4, 4, 5, 4, 5, 4, 4 };
	const string Month_List[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	ifstream Prices("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Chapter 7\\Chapter 7 exercises\\1994_Weekly_Gas_Averages.txt");

	if (!Prices)
	{
		cout << "File not found." << endl;
		return;
	}
	
	cout << fixed << showpoint << setprecision(2);
	int Weeks_Loaded = 0;
	while (getline(Prices, line))
	{
		if (Month_Counter >= 12)
			break;

		double value = stod(line);
		Price_List[Month_Counter] += value;
		Weeks_Loaded++;

		if (Weeks_Loaded >= Month_Week_Amounts[Month_Counter])
		{
			Month_Counter++;
			Weeks_Loaded = 0;
		}
	}

	cout << "Average prices: " << endl;

	for (int Index = 0; Index != 12; Index++)
	{
		double Months_Price = Price_List[Index];
		double Weeks_In_Month = Const_Month_Week_Amounts[Index];

		double Average = (Weeks_In_Month > 0) ? (Months_Price / Weeks_In_Month) : 0.0;

		Average_List[Index] = Average;

		if (Average > Highest)
		{
			Highest = Average;
			Highest_Month = Month_List[Index];
		}
		if (Average < Lowest)
		{
			Lowest = Average;
			Lowest_Month = Month_List[Index];
		}

		cout << Month_List[Index] << " : $" << Average_List[Index] << endl;
	}
	cout << endl;
	cout << "The lowest average price of the year was " << Lowest << " during " << Lowest_Month << endl;
	cout << "The highest average price of the year was " << Highest << " during " << Highest_Month << endl;
}