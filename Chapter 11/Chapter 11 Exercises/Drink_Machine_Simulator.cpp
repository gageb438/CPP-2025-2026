#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Drink
{
	double Cost = 0.0;
	int Number_Avaliable = 20;
	string Name = "";
};

int main()
{
	// INIT
	int Choice = -1;

	Drink Cola;
	Cola.Name = "Cola    ";
	Cola.Cost = .75;

	Drink Root_Beer;
	Root_Beer.Name = "Root Beer";
	Root_Beer.Cost = .75;

	Drink Lemon_Lime;
	Lemon_Lime.Name = "Lemon-Lime";
	Lemon_Lime.Cost = .75;

	Drink Grape_Soda;
	Grape_Soda.Name = "Grape Soda";
	Grape_Soda.Cost = .80;

	Drink Cream_Soda;
	Cream_Soda.Name = "Cream Soda";
	Cream_Soda.Cost = .80;

	vector<Drink> Soda_List = { Cola, Root_Beer, Lemon_Lime, Grape_Soda, Cream_Soda };

	double Total = 0.0;

	cout << fixed << showpoint << setprecision(2);

	do
	{
		int Soda_Choice;
		double Money, Change;

		for (int Iterator = 0; Iterator < Soda_List.size(); Iterator++)
		{
			cout << Iterator + 1 << ") " << Soda_List[Iterator].Name << "\t\t\t" << Soda_List[Iterator].Cost << endl;
		}

		cout << "6) Leave the drink machine" << endl;

		cout << endl << "Choose one: ";
		cin >> Soda_Choice;

		if (Soda_Choice == 6)
		{
			cout << endl << "Total Earnings: $" << Total << endl;
			return 0;
		}

		if (Soda_Choice > 6 || Soda_Choice < 1)
		{
			cout << "Invalid soda choice. " << endl;
			continue;
		}
		else
		{
			Soda_Choice -= 1;
		}

		if (Soda_List[Soda_Choice].Number_Avaliable <= 0)
		{
			cout << "Soda is out of stock!" << endl;
			continue;
		}

		cout << "Enter an amount of money: ";
		cin >> Money;

		while (Money < Soda_List[Soda_Choice].Cost || Money > 1)
		{
			cout << "Enter at least " << Soda_List[Soda_Choice].Cost << " and not more than 1 dollar.";
			cout << "Enter an amount of money: ";
			cin >> Money;
		}

		Change = Money - Soda_List[Soda_Choice].Cost;

		cout << endl << "Thump, thump, thump, splat!" << endl;
		cout << "Enjoy your beverage!" << endl << endl;
		cout << "Change calculated: " << Change << endl;

		if (Change > 0)
		{
			cout << "Your change, " << Change << " has just dropped into the Change Dispencer." << endl;
		}

		Total += Money - Change;

		Soda_List[Soda_Choice].Number_Avaliable -= 1;

		cout << endl << "There are " << Soda_List[Soda_Choice].Number_Avaliable << " drinks of that type left. " << endl << endl;
	} while (Choice <= 0 || Choice > 6);
}