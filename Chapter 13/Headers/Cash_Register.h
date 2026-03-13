#pragma once

#include <vector>

#include "../Headers/Inventory.h"

class Cash_Register
{
private:
	int Purchasing_Quantity;
	double Total_Cost, Markup, Tax, Sub_Total;
	std::vector<Inventory> Cart;

	void Calculate_Money();
	void Calculate_Quantity();
	void Calculate_Total_Cost();
	void Calculate_Markup();
	void Calculate_Tax();
	void Calculate_Sub_Total();
public:
	Cash_Register();
	void Add_To_Cart(Inventory Item);
	int Get_Purchasing_Quantity();
	int Get_Item_Quantity(int Item_Number);
	double Get_Total_Cost();
	double Get_Markup();
	double Get_Tax();
	double Get_Sub_Total();
	
};