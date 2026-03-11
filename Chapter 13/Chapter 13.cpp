#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Rectangle
{
private:
	double Width = 0.0, Length = 0.0, Area = 0.0;
	string Name;

	void Calculate_Area()
	{
		Area = Width * Length;
	}

public:
	// Getters
	double Get_Width()
	{
		return Width;
	}
	
	double Get_Length()
	{
		return Length;
	}

	double Get_Area()
	{
		return Area;
	}

	string Get_Name()
	{
		return Name;
	}

	// Setters
	void Set_Width(double New_Width)
	{
		Width = New_Width;
		Calculate_Area();
	}
	
	void Set_Length(double New_Length)
	{
		Length = New_Length;
		Calculate_Area();
	}

	void Set_Name(string New_Name)
	{
		Name = New_Name;
	}
};

int main()
{
	/*
	Room Kitchen, Bedroom, Living_Room;
	Kitchen.Set_Name("Kitchen");
	Kitchen.Set_Length(10);
	Kitchen.Set_Width(14);
	Bedroom.Set_Name("Bedroom");
	Bedroom.Set_Length(15);
	Bedroom.Set_Width(12);
	Living_Room.Set_Name("Living Room");
	Living_Room.Set_Length(20);
	Living_Room.Set_Width(30);
	*/

	
	Rectangle* Rectangle_Pointer;
	Rectangle_Pointer = new Rectangle;
	Rectangle_Pointer->Set_Name("Kitchen");
	Rectangle_Pointer->Set_Length(10);
	Rectangle_Pointer->Set_Width(14);

	delete Rectangle_Pointer;
	Rectangle_Pointer = nullptr;

	Rectangle_Pointer = new Rectangle;
	Rectangle_Pointer->Set_Name("Bedroom");
	Rectangle_Pointer->Set_Length(15);
	Rectangle_Pointer->Set_Width(12);

	delete Rectangle_Pointer;
	Rectangle_Pointer = nullptr;

	Rectangle_Pointer = new Rectangle;
	Rectangle_Pointer->Set_Name("Living Room");
	Rectangle_Pointer->Set_Length(20);
	Rectangle_Pointer->Set_Width(30);
	
	delete Rectangle_Pointer;
	Rectangle_Pointer = nullptr;
}