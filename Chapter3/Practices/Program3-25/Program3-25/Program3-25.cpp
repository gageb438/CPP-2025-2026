#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	unsigned seed = time(0);

	srand(seed);

	cout << "Generating three random numbers..." << endl << rand() << endl << rand() << endl << rand() << endl;
}