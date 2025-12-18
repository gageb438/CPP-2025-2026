#include <iostream>

using namespace std;

string Intro1();
string Intro2(string Role);
void Medic(string Name);

int main()
{
	string Role = Intro1();
	string Name = Intro2(Role);

	if (Role == "medic")
	{
		Medic(Name);
	}
	return 0;
}