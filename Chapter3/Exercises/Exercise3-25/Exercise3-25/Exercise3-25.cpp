#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	Exercise3-25
	Takes input for various things about the user
	then displays a story and outputs it all.
	*/

	// intialize these variables
	string name, age, city, college, profession, animal, petsname;

	// take input from user
	cout << "Input a name: ";
	cin.ignore();
	getline(cin, name);
	
	cout << "Input an age: ";
	cin.ignore();
	getline(cin, age);


	cout << "Input the name of a city: ";
	cin.ignore();
	getline(cin, city);

	cout << "Input the name of a college: ";
	getline(cin, college);
	cin.ignore();

	cout << "Input the name of a profession: ";
	getline(cin, profession);
	cin.ignore();

	cout << "Input a type of animal: ";
	getline(cin, animal);
	cin.ignore();

	cout << "Input a pets name: ";
	getline(cin, petsname);
	cin.ignore();

	cout << "There was a person named " << name << " who decided FOR SOME REASON to live in " << city << ". THEN once they turned " << age << " " << name << " went to COLLEGE (woohooo!!) "
		<< "and then they graduated!!! YAY!!" << " He then wanted to work as a " << profession << " but then " << name << " had a change of heart and realized that the J word is a slur!! "
		<< " After this new revelation, " << name << " burned their degree. " << name << " then adopted a " << animal << " named " << petsname << " and lived for a long time!! but then he realized that his "
		<< animal << " was a robot!!" << " he yelled clanker when he found out and got arrested for using fighting words because that word had been outlawed in 2025. " << name << " later died in jail.";

	return 0;
}