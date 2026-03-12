#include <iostream>
#include <memory>
#include <vector>

using namespace std;

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