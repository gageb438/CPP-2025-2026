#include <iostream>

using namespace std;

int main()
{
	// program 2-25
	// outputs a certain output from seconds

	int totalSeconds = 125;
	int minutes = totalSeconds / 60;
	int seconds = totalSeconds % 60;
	
	cout << "In " << seconds << " seconds there are :" << endl;
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl;

	return 0;
}