#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	/*
	Exercise 3-20
	takes input fro the size of pizza
	Calculates the number of slices of pizza any size can be divided into
	and then outputs it.
	*/

	// intiialize variables
	double pizzaSize, slices, people, slicesPerPerson, totalPizzas, pizzaArea;

	// take input for the size of the pizza
	cout << "Enter the diameter of the pizza in inches: ";
	cin >> pizzaSize;

	// find area and slices for the pizza
	pizzaArea = (3.14 * (pow(pizzaSize / 2, 2)));
	slices = pizzaArea / 14.125;

	// set default precision to 1
	cout << setprecision(1) << fixed << showpoint;

	// output
	cout << "\nA " << pizzaSize << " inch pizza contains about " << slices << " slices." << endl;

	// take input for the amount of people attending
	cout << "\n\nHow many people will be attending? ";
	cin >> people;

	// take input for the slices per person
	cout << "\nHow many slices per person? ";
	cin >> slicesPerPerson;

	// do some maths
	totalPizzas = (people * slicesPerPerson) / (slices);
	
	// output the amount of pizzas needed
	cout << "You will need to buy " << totalPizzas << " total pizzas.\n";

	return 0;
}