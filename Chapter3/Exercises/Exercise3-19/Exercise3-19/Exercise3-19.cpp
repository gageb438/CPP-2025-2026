#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	/*
	Exercise3-19
	calculates monthly payment on a loan
	it also outputs the payment.
	*/

	// initialize variables
	double loan, annualInterestRate, paymentsMade, monthlyRate, adjustedRate, monthlyPayment, amountPaidBack, interestPaid, totalPaid;

	// take input for loan amount
	cout << "Enter the loan amount: ";
	cin >> loan;

	// take input for the interest rate
	cout << "Enter the annual interest rate: ";
	cin >> annualInterestRate;

	// take input for the number of payments made
	cout << "Enter the number of payments made: ";
	cin >> paymentsMade;

	// do some maths
	monthlyRate = annualInterestRate / 12; // monthly interest rate, displayed 2nd (NOT DIVIDED YET)
	adjustedRate = pow(1 + (monthlyRate / 100), paymentsMade); // adjusted rate, not displayed
	monthlyPayment = ((monthlyRate / 100) * adjustedRate) / (adjustedRate - 1) * loan;
	totalPaid = monthlyPayment * paymentsMade;
	interestPaid = totalPaid - loan;
	amountPaidBack = loan + interestPaid;
	
	// set precision to all variables at 2
	cout << setprecision(2) << fixed << showpoint;


	// output all
	cout << "\nLoan Amount:\t\t\t$ " << loan << endl;
	cout << "Monthly Interest rate:\t\t  " << monthlyRate << "%" << endl;
	cout << "Number of Payments:\t\t  " << paymentsMade << endl;
	cout << "Monthly Payment:\t\t$ " << monthlyPayment << endl;
	cout << "Amount Paid Back:\t\t$ " << amountPaidBack << endl;
	cout << "Interest Paid:\t\t\t$ " << interestPaid << endl;

	return 0;
}