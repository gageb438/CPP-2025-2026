#pragma once

#include <string>

class Inventory
{
private:
    int Item_Number, Quantity;
    double Cost, Total_Cost;
    std::string Name;

public:
    Inventory();
    Inventory(int New_Number, int New_Quantity, double New_Cost, std::string New_Name);
    void Set_Item_Number(int New_Number);
    void Set_Quantity(int New_Quantity);
    void Set_Cost(double New_Cost);
    void Set_Total_Cost();
    void Set_Name(std::string New_Name);
    int Get_Item_Number();
    int Get_Quantity();
    double Get_Cost();
    double Get_Total_Cost();
    std::string Get_Name();
};