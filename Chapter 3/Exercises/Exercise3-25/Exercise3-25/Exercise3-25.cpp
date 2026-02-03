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
	getline(cin, name);
	
	cout << "Input an age: ";
	getline(cin, age);

	cout << "Input the name of a city: ";
	getline(cin, city);

	cout << "Input the name of a college: ";
	getline(cin, college);

	cout << "Input the name of a profession: ";
	getline(cin, profession);

	cout << "Input a type of animal: ";
	getline(cin, animal);
	
	cout << "Input a pets name: ";
	getline(cin, petsname);

	cout << "\nThere was a person named " << name << " who decided FOR SOME REASON to live in " << city << ".\nTHEN once they turned " << age << " " << name << " went to COLLEGE (woohooo!!) "
		<< "and then they graduated!!! YAY!!\n" << "They then wanted to get a j*b as a " << profession << " but then " << name << " had a change of heart and realized that the J word is a slur!!"
		<< "\nThey realized they had enough money to buy a labubu and bought a golden one.\nAfter this new revelation, " << name << " burned their degree. " << name << " then adopted a " << animal << " named " << petsname << " and lived for a long time!!\nBut then he realized that his "
		<< animal << " was a robot!!" << " they yelled clanker when he found out and got arrested for using fighting words \nbecause that word had been outlawed in 2025.\n" << name << " later died in jail.";

	return 0;
}