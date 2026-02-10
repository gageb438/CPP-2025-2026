#include <iostream>

using namespace std;

void Selection_Sort(double* Long_Array, int Size);
void Swap(double& Pos1, double& Pos2);
void Test_Scores();
double Find_Average(double* Array, int Size);
void Re_Write();
int Do_Something(int*, int*);

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

int Mode_Finder(int* Array[], int* Size)
{
	// sort array first
	Selection_Sort(Array, Size);

	int Mode = *Array[0];
	int Mode_Count = 0;
	int Best_Mode = Mode;
	int Best_Mode_Count = 0;

	for (int Counter = 0; Counter < *Size; Counter++)
	{
		if (*Array[Counter] = Mode)
		{
			Mode_Count++;
		}
		else
		{
			// check for if the latest mode is better
			if (Mode_Count > Best_Mode_Count)
			{
				// if it is then set the best mode value and the counter of it to the right thing
				Best_Mode = Mode;
				Best_Mode_Count = Mode_Count;

				// now set the new mode
				Mode = *Array[Counter];
				Mode_Count = 1;
			}
		}
	}
	cout << "Mode is " << Mode;
	return Mode;
}

void Selection_Sort(int* Long_Array[], int* Size)
{
	int Min;

	for (int Position = 0; Position < *Size; Position++)
	{
		Min = Position;

		for (int Checking = Position + 1; Checking < *Size; Checking++)
		{
			if (*Long_Array[Checking] <= *Long_Array[Min])
			{
				Min = Checking;
			}
		}

		Swap(*Long_Array[Min], *Long_Array[Position]);
	}
}

int* Element_Shifter(int* Array[], int* Size)
{
    // make new array
    int* Updated_Array = new int[*Size + 1];

    Updated_Array[0] = 0;

    for (int Counter = 1; Counter <= *Size + 1; Counter++)
    {
        Updated_Array[Counter] = *Array[Counter - 1];
    }

    return Updated_Array;
}