#include <iostream>

using namespace std;

int main()
{
	/*
	Program 3-11
	Accepts no arguments
	Outputs an intro message and takes input from the user in the form of
	an integer for the beginning of the inventory for three stores.
	Prompts the user for the number of items sold in each store
	Subtracts that amount from each store's individiaul inventory and outputs the results.
	*/

	// define variables
	int begInv, // beginningi nvnetory for all stores
		sold, // number sold
		store1, store2, store3; // inventory for store 1, 2, and 3.

	cout << "Welcome to the My Widget invnetory control system." << endl;
	cout << "Three stores opened last week with the same beginning inventory." << endl;
	cout << "Please input the beginning inventory: ";
	cin >> begInv;
	
	// set the inv
	store1 = store2 = store3 = begInv;

	// get the amount each inventory sold
	cout << "How much did store 1 sell? ";
	cin >> sold;
	store1 -= sold;

	cout << "How much did store 2 sell? ";
	cin >> sold;
	store2 -= sold;

	cout << "How much did store 3 sell? ";
	cin >> sold;
	store3 -= sold;

	// output each stores sell
	cout << "\nEach store's current invnetory is:" << endl;
	cout << "Store 1: " << store1 << endl << "Store 2: " << store2 << endl << "Store 3: " << store3 << endl;

	return 0;
}