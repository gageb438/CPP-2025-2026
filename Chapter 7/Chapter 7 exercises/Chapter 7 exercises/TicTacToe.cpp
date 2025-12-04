#include <iostream>

using namespace std;

void Output_Board(char[3][3]);
char Find_Winner(char[3][3]);
bool Game_Over(char[3][3]);

void Tic_Tac_Main()
{
	char Board[3][3] = { {'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'} };
    bool Over = false;
    int Player_Turn = 0;
    char Turn_Char = 'z';
    int Row = -1;
    int Column = -1;

    const int Boundary = 3;

    while (Over == false)
    {
        Player_Turn++;
        
        if (Player_Turn % 2 == 0)
        {
            Turn_Char = 'X';
        }
        else
        {
            Turn_Char = 'O';
        }
        
        Output_Board(Board);

        cout << "Player " << Turn_Char << "'s turn." << endl;
        cout << "Enter a row and column to place an " << Turn_Char << "." << endl;

        do
        {
            cout << "Row: ";
            cin >> Row;
            cout << "Column: ";
            cin >> Column;

            if (Row < 1 || Column < 1 || Row > Boundary || Column > Boundary)
            {
                cout << "Invalid input!" << endl;
            }
            else if (Board[Row - 1][Column - 1] != '*')
            {
                cout << "Position is already filled." << endl;
                Row = -1;
                Column = -1;
            }
        } while (Row > Boundary || Row < 1 || Column > Boundary || Column < 1);

        
        Board[Row - 1][Column - 1] = Turn_Char;
        
        Over = Game_Over(Board);
    }

    Output_Board(Board);

    cout << Find_Winner(Board) << " WINS!!!!!" << endl;
}

void Output_Board(char Board[3][3])
{
	cout << "       Columns" << endl;
	cout << "\t1 2 3" << endl;

	for (int Position_1 = 0; Position_1 != 3; Position_1++)
	{
		cout << "Row " << Position_1 + 1 << "\t";

		for (int Position_2 = 0; Position_2 != 3; Position_2++)
		{
			cout << Board[Position_1][Position_2] << " ";
		}
		cout << endl;
	}
}

char Find_Winner(char Board[3][3])
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][0] != '*')
        {
            return Board[i][0];
        }
    }
    
    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i] && Board[0][i] != '*')
        {
            return Board[0][i];
        }
    }
    
    // Check diagonals
    if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[0][0] != '*')
    {
        return Board[0][0];
    }
    if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[0][2] != '*')
    {
        return Board[0][2];
    }
    
    return 'T';
}

bool Game_Over(char Board[3][3])
{
    return Find_Winner(Board) != 'T';
}