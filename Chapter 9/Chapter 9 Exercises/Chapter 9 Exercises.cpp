#include <iostream>

using namespace std;

void Selection_Sort(double* Long_Array, int Size);
void Swap(double& Pos1, double& Pos2);
void Test_Scores();
double Find_Average(double* Array, int Size);
void Re_Write();
int Do_Something(int*, int*);

int main()
{   
    int choice = -1;

    while (choice < 0 || choice > 4)
    {
        cout << "Input choice: " << endl;
        cin >> choice;
    }

    switch (choice)
    {
        case 1:
        {
            Test_Scores();
            break;
        }
        case 2:
        {
            Re_Write();
        }
    }
}

void Test_Scores()
{
    int Scores = -1;

    while (Scores <= 0)
    {
        cout << "How many scores would you like to input? :> ";
        cin >> Scores;
    }

    double* Grades = new double[Scores];

    for (int Count = 0; Count < Scores; Count++)
    {
        double Temp_Score = -1;
        while (Temp_Score <= 0)
        {
            cout << "Input a score :> ";
            cin >> Temp_Score;
        }
        Grades[Count] = Temp_Score;
    }

    Selection_Sort(Grades, Scores);
    
    double avg = Find_Average(Grades, Scores);

    cout << "The average is : " << avg << endl;

    delete[] Grades;
}

void Selection_Sort(double* Long_Array, int Size)
{
	int Min;

	for (int Position = 0; Position < Size; Position++)
	{
		Min = Position;

		for (int Checking = Position + 1; Checking < Size; Checking++)
		{
			if (Long_Array[Checking] < Long_Array[Min])
			{
				Min = Checking;
			}
		}

		Swap(Long_Array[Min], Long_Array[Position]);
	}
}

void Swap(double& Pos1, double& Pos2)
{
	double Temporary = Pos1;
	Pos1 = Pos2;
	Pos2 = Temporary;
}

double Find_Average(double* Array, int Size)
{
    double min = Array[0];
    double total = 0;
    for (int Count = 0; Count < Size; Count++)
    {
        total += Array[Count];
    }

    return (total - min) / (Size - 1);
}

void Re_Write()
{
    int Val1 = 100;
    int Val2 = 200;
    int* X = &Val1;
    int* Y = &Val2;

    int Z = Do_Something(X, Y);
    cout << "Value of " << *X << " and " << *Y << " doing something is " << Z << endl;
}

int Do_Something(int* X, int* Y)
{
    int Temporary = *X;
    *X = *Y * 10;
    *Y = Temporary * 10;
    int Z = *X + *Y;
    return Z;
}

