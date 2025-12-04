#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void Average_Gas_Prices()
{
	int Week_Counter = 1;
	int Month_Counter = 0;
	int Month_Week_Amounts[12] = { 5, 4, 4, 4, 3, 4, 4, 5, 4, 5, 4, 4 };
	double Lowest = 99999999999.00;
	double Highest = -1.00;
	string line;
	vector<double> Price_List;

	const int Const_Month_Week_Amounts[12] = { 5, 4, 4, 4, 3, 4, 4, 5, 4, 5, 4, 4 };
	const string Month_List[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "November", "December" };

	ifstream Prices("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Chapter 7\\Chapter 7 exercises\\1994_Weekly_Gas_Averages.txt");

	if (!Prices)
	{
		cout << "File not found." << endl;
		return;
	}

	while (getline(Prices, line))
	{
		
	}
}