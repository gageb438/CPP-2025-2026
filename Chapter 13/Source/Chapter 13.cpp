#include <iostream>
#include <iomanip>

#include "../Headers/Inventory.h"
#include "../Headers/Cash_Register.h"

using namespace std;

void Display_Stock(Inventory Item[], const int SIZE);

int main()
{
	const int SIZE = 20;
	Inventory Item[SIZE] =
	{
		Inventory(1, 50, 1.99, "Apple"),
		Inventory(2, 40, 0.99, "Banana"),
		Inventory(3, 30, 2.49, "Bread"),
		Inventory(4, 25, 3.99, "Milk"),
		Inventory(5, 20, 4.49, "Eggs"),
		Inventory(6, 35, 2.99, "Cereal"),
		Inventory(7, 45, 1.49, "Soda"),
		Inventory(8, 60, 0.79, "Candy"),
		Inventory(9, 15, 5.99, "Chicken"),
		Inventory(10, 18, 6.49, "Beef"),
		Inventory(11, 22, 2.29, "Pasta"),
		Inventory(12, 28, 1.89, "Sauce"),
		Inventory(13, 32, 3.49, "Cheese"),
		Inventory(14, 26, 2.79, "Yogurt"),
		Inventory(15, 20, 4.99, "Pizza"),
		Inventory(16, 24, 3.29, "Ice"),
		Inventory(17, 50, 0.59, "Water"),
		Inventory(18, 14, 7.99, "Steak"),
		Inventory(19, 33, 1.29, "Chips"),
		Inventory(20, 27, 2.59, "Cookies")
	};

	Display_Stock(Item, SIZE);


}

void Display_Stock(Inventory Item[], const int SIZE)
{
	cout << endl << "Our stock :         \t|\t  Item\t\t|\tItem Number\t|\tQuantity\t|\tCost " << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);

	for (int Iterator = 0; Iterator < SIZE; Iterator++)
	{
		cout << "Item : \t\t\t|\t" << Item[Iterator].Get_Name() << "\t\t|\t     " << Item[Iterator].Get_Item_Number() << "\t\t|\t   " << Item[Iterator].Get_Quantity() << "\t\t|\t$" << Item[Iterator].Get_Cost() << endl;
	}
}

