#include <string>

class Inventory
{
private:
    // Init
    int Item_Number, Quantity;
    double Cost, Total_Cost;
    std::string Name;

    //
    void Calculate_Total_Cost();
public:
    // Constructors
    Inventory();
    Inventory(int New_Number, int New_Quantity, double New_Cost);

    // Setters
    void Set_Item_Number(int New_Number);
    void Set_Quantity(int New_Quantity);
    void Set_Cost(double New_Cost);

    // Getters
    int Get_Item_Number();
    int Get_Quantity();
    double Get_Cost();
    double Get_Total_Cost();
};
