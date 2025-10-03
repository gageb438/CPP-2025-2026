
#include <iostream>
#include <vector>

// prototype
getScore(vector<int>);

// global
const int REQUIRED_VALUES = 5;

// main
int main()
{
    vector<int> values;
    
    getScore(values)
    
}

// getscore
// takes input for the score for the amount of times required 
// and modifies a vector to do so.
void getScore(vector<int>& values)
{
    int val;
    
    for (int test = 0; test < REQUIRED_VALUES; test++)
    {
        cout << "Please enter the test score for test number " << test + 1 << " : ";
        cin >> val;
        
        values[test] = val;
    }
}

// calc avg 
// iterates through the vector of values 
// and finds the average, minus the lowest.
void calcAvg(vector<int>& values)
{
    int total;
    for (int vari : values)
    {
        total += vari
    }
    
    total -= findLowest(values)
    total /= REQUIRED_VALUES - 1;
    
    cout << "After dropping the lowest score, the test average is: " << average;
}

int findLowest(vector<int> values)
{
    int minimum = -1;
    for (int vari : values)
    {
        if (vari < minimum)
        {
            minimum = vari;
        }
    }
    
    return minimum
}
