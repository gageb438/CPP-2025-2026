#include <iostream>
#include <fstream>

using namespace std;

void Encryption_Menu();
void Encrypt_File();
void Decrypt_File();

int main()
{
	Encryption_Menu();
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