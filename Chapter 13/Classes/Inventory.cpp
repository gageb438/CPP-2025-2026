#include <string>
#include "../Headers/Inventory.h"

Inventory::Inventory()
{
	Item_Number = 0;
	Quantity = 0;
	Cost = 0.0;
	Total_Cost = 0.0;
	Name = "No Name";
}

Inventory::Inventory(int New_Number, int New_Quantity, double New_Cost, std::string New_Name)
{
	Item_Number = New_Number;
	Quantity = New_Quantity;
	Cost = New_Cost;
	Name = New_Name;
	Inventory::Set_Total_Cost();
}

void Inventory::Set_Item_Number(int New_Number)
{
	Item_Number = New_Number;
}

void Inventory::Set_Quantity(int New_Quantity)
{
	Quantity = New_Quantity;
	Inventory::Set_Total_Cost();
}

void Inventory::Set_Cost(double New_Cost)
{
	Cost = New_Cost;
	Inventory::Set_Total_Cost();
}

void Inventory::Set_Total_Cost()
{
	Total_Cost = Quantity * Cost;
}

void Inventory::Set_Name(std::string New_Name)
{
	Name = New_Name;
}

int Inventory::Get_Item_Number()
{
	return Item_Number;
}

int Inventory::Get_Quantity()
{
	return Quantity;
}

double Inventory::Get_Cost()
{
	return Cost;
}

double Inventory::Get_Total_Cost()
{
	return Total_Cost;
}

std::string Inventory::Get_Name()
{
	return Name;
}

