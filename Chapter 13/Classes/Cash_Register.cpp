#include <vector>

#include "../Headers/Cash_Register.h"

Cash_Register::Cash_Register()
{
	Purchasing_Quantity = 0;
	Total_Cost = 0.0, Markup = 0.0, Tax = 0.0, Sub_Total = 0.0;
}

void Cash_Register::Calculate_Money()
{
	Calculate_Quantity();
	Calculate_Total_Cost();
	Calculate_Markup();
	Calculate_Tax();
	Calculate_Sub_Total();
}

void Cash_Register::Calculate_Quantity()
{
	Purchasing_Quantity = 0;

	for (int Iterator = 0; Iterator < Cart.size(); Iterator++)
	{
		Purchasing_Quantity += Cart[Iterator].Get_Quantity();
	}
}

void Cash_Register::Calculate_Total_Cost()
{
	Total_Cost = 0.0;
	
	for (int Iterator = 0; Iterator < Cart.size(); Iterator++)
	{
		Total_Cost += Cart[Iterator].Get_Total_Cost();
	}
}

void Cash_Register::Calculate_Markup()
{
	Markup = Total_Cost * 0.30;
}

void Cash_Register::Calculate_Tax()
{
	Tax = (Total_Cost + Markup) * 0.06;
}

void Cash_Register::Calculate_Sub_Total()
{
	Sub_Total = Total_Cost + Markup + Tax;
}

void Cash_Register::Add_To_Cart(Inventory Item)
{
	// Validate it isnt already in the cart, if it is, add the quantity to the existing item, if not, then add it to cart
	bool Found = false;

	for (int Iterator = 0; Iterator < Cart.size(); Iterator++)
	{
		if (Cart[Iterator].Get_Item_Number() == Item.Get_Item_Number())
		{
			Found = true;
			Cart[Iterator].Set_Quantity(Item.Get_Quantity() + Cart[Iterator].Get_Quantity());
			break;
		}
	}

	// perfect
	if (!Found)
	{
		Cart.push_back(Item);
	}

	// Recalculate
	Calculate_Money();
}

int Cash_Register::Get_Purchasing_Quantity()
{
	return Purchasing_Quantity;
}

int Cash_Register::Get_Item_Quantity(int Item_Number)
{
	for (int Iterator = 0; Iterator < Cart.size(); Iterator++)
	{
		if (Cart[Iterator].Get_Item_Number() == Item_Number)
		{
			return Cart[Iterator].Get_Quantity();
		}
	}

	return 0;
}

double Cash_Register::Get_Total_Cost()
{
	return Total_Cost;
}

double Cash_Register::Get_Markup()
{
	return Markup;
}

double Cash_Register::Get_Tax()
{
	return Tax;
}

double Cash_Register::Get_Sub_Total()
{
	return Sub_Total;
}