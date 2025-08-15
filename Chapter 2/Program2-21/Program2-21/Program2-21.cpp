#include <iostream>

using namespace std;

int main() {
	// program 2-21
	// intialize vriables
	double regularWages, 
		basePayRate = 18.5, 
		regularHours = 40, 
		overtimeWages, 
		overtimePayRate = 27.78, 
		overtimeHours = 10, 
		totalWages;

	// calculate regular wages
	regularWages = basePayRate * regularHours;

	// calculate the overtime wages
	overtimeWages = overtimePayRate * overtimeHours;

	// calculate the total wages
	totalWages = regularWages + overtimeWages;

	// display the total wages
	cout << "Your wages for this week are: $" << totalWages << endl;

	return 0;
}