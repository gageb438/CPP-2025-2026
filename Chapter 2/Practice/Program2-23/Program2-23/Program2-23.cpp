#include <iostream>

using namespace std;

int main() {
	// program 2-23
	// program 2-23 calculates the same price of an item that has a regular
	// price of $59.95, with a 20 percent discount applied

	float basePrice = 59.95;
	float discountPercent = .20;
	float discountPrice = basePrice * discountPercent;
	float endPrice = basePrice - discountPrice;

	cout << "Regular Price: $" << basePrice << endl;
	cout << "Discount amount: $" << discountPrice << endl;
	cout << "Sale Price: $" << endPrice << endl;

	return 0;
}