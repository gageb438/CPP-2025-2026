#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() 
{
    // 8 ball recieves no arguments
    // it runs by picking a random ball from a file.
    // and outputting it
    ifstream Responses("FilePathHere");
    vector<string> Response_List = {};

    string Line, Question;

    srand(static_cast<unsigned int>(time(0)))

    while (getline(Responses, Line))
    {
        Response_List.push_back(Line);
    }

    // prompt for if they should do something
    while (Question != "stop")
    {
        cout << "Question('stop' to stop) : ";
        cin >> Question;

        int choice = rand() % Response_List.end();
        cout << Response_List[choice] << endl;
    }


}
