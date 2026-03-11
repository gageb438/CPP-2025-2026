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
	char Description[50];
	Date Date_Added;
	int Quantity = -1;
	double Wholesale_Cost = -1.0, Retail_Cost = -1.0;
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
			break;
		}
		case 2:
		{
			Display_Records();
			break;
		}
		case 3:
		{
			Change_Records();
			break;
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
	cin.ignore();
	cin.getline(My_Item.Description, 50);

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
	while (My_Item.Quantity < 0)
	{
		cout << "Enter the quantity of the item :> ";
		cin >> My_Item.Quantity;
		if (My_Item.Quantity < 0)
		{
			cout << "Invalid Quantity. Please enter a number greater than or equal to 0." << endl;
		}
	}
	while (My_Item.Wholesale_Cost < 0)
	{
		cout << "Enter the wholesale cost of the item :> ";
		cin >> My_Item.Wholesale_Cost;
		if (My_Item.Wholesale_Cost < 0)
		{
			cout << "Invalid Wholesale cost. Please enter a number greater than or equal to 0." << endl;
		}
	}
	while (My_Item.Retail_Cost < 0)
	{
		cout << "Enter the retail cost of the item :> ";
		cin >> My_Item.Retail_Cost;
		if (My_Item.Retail_Cost < 0)
		{
			cout << "Invalid Retail cost. Please enter a number greater than or equal to 0. " << endl;
		}
	}
	
	
	// Open the file
	fstream Inventory_File("Inventory.dat", ios::app | ios::binary);

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

	ifstream Inventory_File("Inventory.dat", ios::binary);

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

	fstream Inventory_File("Inventory.dat", ios::binary | ios::in | ios::in);

	if (!Inventory_File.is_open())
	{
		cout << "Error opening the inventory file." << endl;
		return;
	}

	int Target_Record = -1;
	int Counter = 0;

	while (Inventory_File.read(reinterpret_cast<char*>(&My_Item), sizeof(My_Item)))
	{
		cout << "Record Number : #" << Counter << endl;
		cout << "Description : " << My_Item.Description << endl;
		cout << "Date Added : " << My_Item.Date_Added.Month << "/" << My_Item.Date_Added.Day << "/" << My_Item.Date_Added.Year << endl;
		cout << "Quantity : " << My_Item.Quantity << endl;
		cout << "Wholesale Cost : " << My_Item.Wholesale_Cost << endl;
		cout << "Retail Cost : " << My_Item.Retail_Cost << endl;
		cout << "-----------------------------" << endl;

		Counter++;
	}

	if (Counter == 0)
	{
		cout << "No records found in the inventory file." << endl;
	}
	
	if (Target_Record < 0 || Target_Record > Counter)
	{
		cout << "Enter the record number you want to change :> ";
		cin >> Target_Record;
	}

	Inventory_File.seekg(Target_Record * sizeof(Item), ios::beg);
	Inventory_File.read(reinterpret_cast<char*>(&My_Item), sizeof(My_Item));

	do
	{
		cout << "Enter the quantity of the item :> ";
		cin >> My_Item.Quantity;
		if (My_Item.Quantity < 0)
		{
			cout << "Invalid Quantity. Please enter a number greater than or equal to 0." << endl;
		}
	} while (My_Item.Quantity < 0);
	do
	{
		cout << "Enter the wholesale cost of the item :> ";
		cin >> My_Item.Wholesale_Cost;
		if (My_Item.Wholesale_Cost < 0)
		{
			cout << "Invalid Wholesale cost. Please enter a number greater than or equal to 0." << endl;
		}
	} while (My_Item.Wholesale_Cost < 0);
	do
	{
		cout << "Enter the retail cost of the item :> ";
		cin >> My_Item.Retail_Cost;
		if (My_Item.Retail_Cost < 0)
		{
			cout << "Invalid Retail cost. Please enter a number greater than or equal to 0. " << endl;
		}
	} while (My_Item.Retail_Cost < 0);

	Inventory_File.seekp(Target_Record * sizeof(Item), ios::beg);
	Inventory_File.write(reinterpret_cast<char*>(&My_Item), sizeof(My_Item));

	cout << "New record written. " << endl;
	Inventory_File.close();
}