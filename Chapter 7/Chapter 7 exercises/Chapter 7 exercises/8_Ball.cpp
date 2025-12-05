#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

void Eight_Ball() 
{
    // 8 ball recieves no arguments
    // it runs by picking a random ball from a file.
    // and outputting it
    ifstream Responses("C:\\Users\\2013565\\Documents\\GitHub\\CPP-2025-2027\\Chapter 7\\Chapter 7 exercises\\8_ball_responses.txt");
    vector<string> Response_List = {};

    string Line;

    srand(static_cast<unsigned int>(time(0)));
    
    if (!Responses)
    {
        cout << "File not found." << endl;;
        return;
    }
    while (getline(Responses, Line))
    {
        Response_List.push_back(Line);
    }

    if (Response_List.size() == 0)
    {
        cout << "No responses loaded." << endl;
        return;
    }

    // prompt for if they should do something
    string Question;

    cout << "Question: ";

    cin.ignore();
    getline(cin, Question);
    
    int choice = rand() % (Response_List.size());

    cout << Response_List[choice] << endl;
}
