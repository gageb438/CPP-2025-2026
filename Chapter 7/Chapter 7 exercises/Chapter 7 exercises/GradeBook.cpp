#include <iostream>
#include <string>

using namespace std;

void Grade_Book()
{
	string Names[5];
	double Grades[5][4];

	for (int counter = 0; counter < 5; counter++)
	{
		string name;
		cout << "Enter the data for student " << counter + 1 << "." << endl;
		cout << "Student name: ";
		cin >> name;
		Names[counter] = name;
		
		for (int count = 0; count < 4; count++)
		{
			double score;
			cout << "Test score " << count + 1 << ": ";
			cin >> score;

			while (score < 0 || score > 100)
			{
				cout << "Test score " << count + 1 << ": ";
				cin >> score;
			}

			Grades[counter][count] = score;
		}
	}

	for (int person = 0; person < 5; person++)
	{
		cout << "Name: " << Names[person] << endl;
		cout << "Test 1: " << Grades[person][0] << endl;
		cout << "Test 2: " << Grades[person][1] << endl;
		cout << "Test 3: " << Grades[person][2] << endl;
		cout << "Test 4: " << Grades[person][3] << endl;

		double avg = ((Grades[person][0]) + (Grades[person][1]) + (Grades[person][2]) + (Grades[person][3])) / 4;

		cout << "Average: " << avg << endl;
		if (avg >= 90)
		{
			cout << "Grade: A";
		}
		else if (avg <= 89 && avg >= 80)
		{
			cout << "Grade: B";
		}
		else if (avg <= 79 && avg >= 70)
		{
			cout << "Grade: C";
		}
		else if (avg <= 69 && avg >= 60)
		{
			cout << "Grade: D";
		}
		else
		{
			cout << "Grade: F";
		}
		cout << endl << endl;
	}
}