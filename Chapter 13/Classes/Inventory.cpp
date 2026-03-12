#include "Inventory.h"

Inventory::Get_Total_Cost()
{
    Total_Cost = Quantity * Cost;
}

Inventory::Inventory()
{
    Item_Number = 0;
    Quantity = 0;
    Cost = 0.0;
    Total_Cost = 0.0;
}

Inventory::Inventory(int New_Number, int New_Quantity, double New_Cost)
{
    int Number = New_Number;
    int Quantity = New_Quantity;
    double Cost = New_Cost;
}