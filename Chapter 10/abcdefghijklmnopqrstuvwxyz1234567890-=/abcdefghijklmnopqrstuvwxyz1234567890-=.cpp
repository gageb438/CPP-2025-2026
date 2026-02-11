#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string Sentence;
	getline(cin, Sentence);
	int Size = 0;

	for (int Index = 0; Sentence[Index] != '\0'; Index++)
	{
		Size++;
	}

	char* something1 = new char[Size];
	char* something2 = new char[Size + 1];
}

void stringCopy(char string1[], char string2[])
{
	int index = 0;

	while (string1[index] != '\0')
	{
		string2[index] = string1[index];
		index++;
	}

	string2[index] = '\0';
}