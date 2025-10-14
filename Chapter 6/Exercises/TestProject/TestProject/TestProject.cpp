#include <iostream>
using namespace std;

int main()
{
	int days;
	cout << "days: ";
	cin >> days;

	double departure, returnt;
	cout << "departure: ";
	cin >> departure;
	cout << "return: ";
	cin >> returnt;

	double airfare;
	cout << "airfare: ";
	cin >> airfare;

	double carfees;
	cout << "carfees: ";
	cin >> carfees;
		
	double parking;
	cout << "parking: ";
	cin >> parking;

	double taxi;
	cout << "taxi fees: ";
	cin >> taxi;

	double regi;
	cout << "registration fees: ";
	cin >> regi;

	double hotel;
	cout << "hotel: ";
	cin >> hotel;
	hotel *= days;

	double b1, b2, b3, b4;
	cout << "b1: ";
	cin >> b1 >> b2 >> b3 >> b4;

	double l1, l2, l3;
	cout << "l1: ";
	cin >> l1 >> l2 >> l3;

	double d1, d2, d3;
	cout << "d: ";
	cin >> d1 >> d2 >> d3;

	double total = airfare + carfees + parking + taxi + regi + hotel + b1 + b2 + b3 + b4 + l1 + l2 + l3 + d1 + d2 + d3;
	cout << total;
}