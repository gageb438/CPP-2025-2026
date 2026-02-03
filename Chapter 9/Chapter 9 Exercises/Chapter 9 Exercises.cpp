#include <iostream>

using namespace std;

void Selection_Sort(int* Long_Array[], int Size);
void Swap(int& Pos1, int& Pos2);
void Test_Scores();

int main()
{
    int choice = -1;

    while (choice < 0 || choice > 4)
    {
        cout << "Input choice: " << endl;
        cin >> choice;
    }

    switch choice:
    {
        case 1:
        {
            Test_Scores();
            break;
        }
        
    }
}

void Test_Scores()
{
    int Scores = -1

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
}

void Selection_Sort(int* Long_Array[], int Size)
{
	int Min;

	for (int Position = 0; Position < Size; Position++)
	{
		Min = Position;

		for (int Checking = Position + 1; Checking < Size; Checking++)
		{
			if (*Long_Array[Checking] <= *Long_Array[Min])
			{
				Min = Checking;
			}
		}

		Swap(*Long_Array[Min], *Long_Array[Position]);
	}
}

void Swap(int& Pos1, int& Pos2)
{
	int Temporary = Pos1;
	Pos1 = Pos2;
	Pos2 = Temporary;
}