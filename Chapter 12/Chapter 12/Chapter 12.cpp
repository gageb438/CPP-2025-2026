#include <iostream>
#include <fstream>

using namespace std;

void Encryption_Menu();
void Encrypt_File();
void Decrypt_File();

void Inventory_Menu();
void Add_Records();
void Display_Records();
void Change_Records();

int main()
{
	while (true)
	{
		int Choice = 0;
		cout << endl << "1) Encryption Menu" << endl;
		cout << "2) Inventory Menu" << endl;
		cout << "3) Exit" << endl;
		cout << ":> ";
		cin >> Choice;

		switch (Choice)
		{
		case 1:
		{
			Encryption_Menu();
			break;
		}
		case 2:
		{
			Inventory_Menu();
			break;
		}
		case 3:
		{
			cout << "Exiting the program. Goodbye!" << endl;
			return 0;
		}
		default:
		{
			cout << "Invalid input. Please use a number between 1 and 3." << endl;
			continue;
		}
		}
	}
}

void Encryption_Menu()
{
	while (true)
	{
		int Choice = 0;

		cout << endl << "Encryption Menu" << endl;
		cout << "1. Encrypt a file" << endl;
		cout << "2. Decrypt a file" << endl;
		cout << "3. Exit" << endl << endl;

		while (Choice < 1 || Choice > 3)
		{
			cout << "Enter your choice :> ";
			cin >> Choice;

			if (Choice < 1 || Choice > 3)
			{
				cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
			}
		}

		switch (Choice)
		{
		case 1:
		{
			Encrypt_File();
			break;
		}
		case 2:
		{
			Decrypt_File();
			break;
		}
		case 3:
		{
			cout << "Exiting the program. Goodbye!" << endl;
			return;
		}
		}
	}
}

void Encrypt_File()
{
	// Init variables
	const int Adjustment = 10;
	string To_Encrypt_File, Encrypted_File;

	// Take input for the file name
	cout << "Enter the file name to encrypt :> ";
	cin >> To_Encrypt_File;

	// Take input for the file name to save encrypted data
	cout << "Enter the name of the file save encrypted data :> ";
	cin >> Encrypted_File;

	// Open the files.
	ifstream In_File(To_Encrypt_File);
	

	// Check if the files are open
	if (!In_File)
	{
		cout << "Error opening the file to encrypt." << endl;
		return;
	}

	// Open second one, so it isnt created unecessarily if the first file fails to open
	ofstream Out_File(Encrypted_File);

	// Check if its open.
	if (!Out_File)
	{
		cout << "Error opening the file to save encrypted data." << endl;
		return;
	}

	// Encrypt the file
	char Character;
	
	while (In_File.get(Character))
	{
		if (Character == '\n')
		{
			Out_File.put(Character);
			continue;
		}
		Out_File.put(static_cast<char>(Character + Adjustment));
	}

	// Close the files
	In_File.close();
	Out_File.close();

	// Output completion message
	cout << "The encryption was a success. The file " << To_Encrypt_File << " has been encrypted and is saved as " << Encrypted_File << "." << endl;

	return;
}

void Decrypt_File()
{
	const int Adjustment = 10;
	string Decrypted_File_Name, Encrypted_File_Name;

	// Take input for the file name
	cout << "Enter the file to decrypt :> ";
	cin >> Encrypted_File_Name;

	// Take input for the file name to save encrypted data
	cout << "Enter the name of the file to save the decrypted text to :> ";
	cin >> Decrypted_File_Name;

	// Open the files.
	ifstream Encrypted_File(Encrypted_File_Name);


	// Check if the files are open
	if (!Encrypted_File)
	{
		cout << "Error opening the encrypted file." << endl;
		return;
	}

	// Open second one, so it isnt created unecessarily if the first file fails to open
	ofstream Decrypted_File(Decrypted_File_Name);

	// Check if its open.
	if (!Decrypted_File)
	{
		cout << "Error opening the file to save decrypted data." << endl;
		return;
	}

	// Encrypt the file
	char Character;

	while (Encrypted_File.get(Character))
	{
		if (Character == '\n')
		{
			Decrypted_File.put(Character);
			continue;
		}
		Decrypted_File.put(static_cast<char>(Character - Adjustment));
	}

	// Close the files
	Encrypted_File.close();
	Decrypted_File.close();

	// Output completion message
	cout << "The decryption was a success. The file " << Encrypted_File_Name << " has been decrypted and is saved as " << Decrypted_File_Name << "." << endl;

	return;
}


// Item struct for inventory management
struct Date
{
	int Day = 0, Month = 0, Year = 0;
};

struct Item
{
	string Description = "";
	Date Date_Added;
	int Quantity = 0;
	double Wholesale_Cost = 0.0, Retail_Cost = 0.0;
};



void Inventory_Menu()
{
	// Loop while until the user chooses to exit
	while (true)
	{
		// Output menu
		int Choice = 0;
		cout << "1) Add new records to file" << endl;
		cout << "2) Display any record in the file" << endl;
		cout << "3) Change any record in the file" << endl;
		cout << "4) Exit" << endl;
		cout << ":> ";

		cin >> Choice;
		// Switch menu
		switch (Choice)
		{
			// Add records
		case 1:
		{
			Add_Records();
			continue;
		}
		case 2:
		{
			Display_Records();
		}
		case 3:
		{
			Change_Records();
		}
		case 4:
		{
			cout << "Exiting the program. Goodbye!" << endl;
			return;
		}
		default:
		{
			cout << "Invalid input. Please use a number between 1 and 3." << endl;
			continue;
		}
		}
	}
}

void Add_Records()
{
	Item My_Item;
	cout << "Enter the description of the item :> ";
	cin >> My_Item.Description;

	while (My_Item.Date_Added.Day < 1 || My_Item.Date_Added.Day > 31)
	{
		cout << "Enter the day the item was added :> ";
		cin >> My_Item.Date_Added.Day;
		if (My_Item.Date_Added.Day < 1 || My_Item.Date_Added.Day > 31)
		{
			cout << "Invalid day. Please enter a number between 1 and 31." << endl;
		}
	}
	while (My_Item.Date_Added.Month < 1 || My_Item.Date_Added.Month > 12)
	{
		cout << "Enter the month the item was added :> ";
		cin >> My_Item.Date_Added.Month;
		if (My_Item.Date_Added.Month < 1 || My_Item.Date_Added.Month > 12)
		{
			cout << "Invalid month. Please enter a number between 1 and 12." << endl;
		}
	}
	while (My_Item.Date_Added.Year < 1 || My_Item.Date_Added.Year > 2026)
	{
		cout << "Enter the year the item was added :> ";
		cin >> My_Item.Date_Added.Year;
		if (My_Item.Date_Added.Year < 1)
		{
			cout << "Invalid year. Please enter a positive number." << endl;
		}
	}
	cout << "Enter the quantity of the item :> ";
	cin >> My_Item.Quantity;
	cout << "Enter the wholesale cost of the item :> ";
	cin >> My_Item.Wholesale_Cost;
	cout << "Enter the retail cost of the item :> ";
	cin >> My_Item.Retail_Cost;
	
	// Open the file
	fstream Inventory_File("Inventory.txt", ios::app | ios::binary);

	if (!Inventory_File)
	{
		cout << "Error opening the inventory file." << endl;
		return;
	}

	// Write the item to the file
	Inventory_File.write(reinterpret_cast<char*>(&My_Item), sizeof(My_Item));
}

void Display_Records()
{
	Item My_Item;

	ifstream Inventory_File("Inventory.txt", ios::binary);

	if (!Inventory_File)
	{
		cout << "Error opening the inventory file." << endl;
		return;
	}

	while (Inventory_File.read(reinterpret_cast<char*>(&My_Item), sizeof(My_Item)))
	{
		cout << "Description : " << My_Item.Description << endl;
		cout << "Date Added : " << My_Item.Date_Added.Month << "/" << My_Item.Date_Added.Day << "/" << My_Item.Date_Added.Year << endl;
		cout << "Quantity : " << My_Item.Quantity << endl;
		cout << "Wholesale Cost : " << My_Item.Wholesale_Cost << endl;
		cout << "Retail Cost : " << My_Item.Retail_Cost << endl;
		cout << "-----------------------------" << endl;
	}
}

void Change_Records()
{
	Item My_Item;

	ifstream Inventory_File("Inventory.txt", ios::binary);

	if (!Inventory_File)
	{
		cout << "Error opening the inventory file." << endl;
		return;
	}

	int Counter = 0;
}