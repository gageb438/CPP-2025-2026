#include <iostream>
#include <iomanip>

#include "../Headers/Inventory.h"
#include "../Headers/Cash_Register.h"

using namespace std;

void Display_Stock(Inventory Item[], const int SIZE);
void Fill_Cart(Inventory Item[], Cash_Register& Register, const int SIZE);
void Output_Summary(Cash_Register Persons_Register);

int main()
{
	// Init
	const int SIZE = 20;
	
	Cash_Register Register;
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

	Fill_Cart(Item, Register, SIZE);
	Output_Summary(Register);

	return 0;
}

void Display_Stock(Inventory Item[], const int SIZE)
{
	cout << endl << "Our stock :         \t|\t  Item\t\t|\tItem Number\t|\tQuantity\t|\tCost " << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);

	for (int Iterator = 0; Iterator < SIZE; Iterator++)
	{
		cout << "Item : \t\t\t|\t" << Item[Iterator].Get_Name() << "\t\t|\t     " << Item[Iterator].Get_Item_Number() << "\t\t|\t   " << Item[Iterator].Get_Quantity() << "\t\t|\t$" << Item[Iterator].Get_Cost() * 1.30 /* Up the cost by 30%, this is the proper markup. */ << endl;
	}
}

void Fill_Cart(Inventory Item[], Cash_Register& Register, const int SIZE)
{
	while (true)
	{
		// Init
		int User_Request;
		int Requested_Amount;

		// Display the stock
		Display_Stock(Item, SIZE);

		// Get input for the item number
		cout << endl << "Enter the item number that you would like to purchase (0 to end)" << endl;
		cout << ":> ";
		cin >> User_Request;

		// Check if they chose to exit
		if (User_Request == 0)
		{
			return;
		}

		// Check its valid
		if (Item[User_Request - 1].Get_Quantity() == 0)
		{
			cout << "Item out of stock. Try a new value." << endl;
			continue;
		}
		
		while (User_Request < 0 || User_Request > SIZE)
		{
			cout << "Invalid item number, please try again (0 to end)";
			cout << ":> ";
			cin >> User_Request;
		}

		// Get input for the amount
		cout << "Enter the amount you would like to purchase";
		cout << ":> ";
		cin >> Requested_Amount;

		// Validate it
		while (Requested_Amount <= 0 || Requested_Amount > Item[User_Request - 1].Get_Quantity())
		{
			cout << "Invalid amount. Please try again.";
			cout << ":> ";
			cin >> Requested_Amount;
		}

		// Add it to the cart
		// I know this is bad memory practice but clone the class and add it to the cart then update quantity 
		Inventory Clone = Item[User_Request - 1];
		Clone.Set_Quantity(Requested_Amount);
		
		// Add it to the cart
		Register.Add_To_Cart(Clone);

		// Update the stock
		Item[User_Request - 1].Set_Quantity(Item[User_Request - 1].Get_Quantity() - Requested_Amount);
	}
}

void Output_Summary(Cash_Register Persons_Register)
{
	// Output the total
	cout << endl << "Cart Summary : " << endl;
	cout << "_______________________________________" << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "\tTotal Cost : $" << Persons_Register.Get_Total_Cost() << endl;
	cout << "\tMarkup : $" << Persons_Register.Get_Markup() << endl;
	cout << "+\tTax : $" << Persons_Register.Get_Tax() << endl;
	cout << "---------------------------------------" << endl;
	cout << "\tSub Total : $" << Persons_Register.Get_Sub_Total() << endl;

	// Exit program
	exit(0);
}