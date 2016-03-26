/*
	PROGRAM ONE: 	FINANCIAL BUDGET PROGRAM
	AUTHOR: 		CONG TUAN NGUYEN
	DATE: 			2/3/2016
	DESCRIPTION:	The program will calculate how much money the user using it has
					and gives advices based on the total money the user input.
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	// All variables needed to initialize, where bills is a cumulative number. 
	float monthlyIncome = 0.0;				
	float bills;
	float currentBalance;
	
	// Start asking questions about income and bills.
	cout << "Simple Budget Calculator\n" << "Version 1.0\n";
	cout << endl;
	
	cout << "Please enter your monthly income: $ ";
	cin >> monthlyIncome;
	cout << "Monthly Income: $" << monthlyIncome << endl << endl;
	
	cout << "Now we\'ll ask you about your bills accumulated this month." << endl;
	cout << endl;
	cout << "RENT: $ ";
	cin >> bills;

    // Instead of having multiple values, one could simply do calculation on every input asked.
	currentBalance = monthlyIncome - bills;

	cout << "WATER & ELECTRICITY: $ ";
	cin >> bills;

	// Then using the base calculation, incremental calculation would later be done.
	currentBalance = currentBalance - bills;

	cout << "INTERNET: $ ";
	cin >> bills;
	
	currentBalance = currentBalance - bills;

	cout << "PHONE: $ ";
	cin >> bills;
	
	currentBalance = currentBalance - bills;
	
	cout << "CAR PAYMENT: $ ";
	cin >> bills;
	
	currentBalance = currentBalance - bills;
	
	cout << "GAS: $ ";
	cin >> bills;
	
	currentBalance = currentBalance - bills;

	cout << "INSURANCE: $ ";
	cin >> bills;
	
	currentBalance = currentBalance - bills;

	cout << "GROCERIES: $ ";
	cin >> bills;
	
	currentBalance = currentBalance - bills;

    cout << "DINING OUT: $ ";
	cin >> bills;
	
	currentBalance = currentBalance - bills;

	cout << "MISCELLANEOUS STUFF: $ ";			// Useless stuff you don't need
	cin >> bills;
	
	currentBalance = currentBalance - bills;
	cout << endl;

	// Total Balance and If/Else statements
	if (currentBalance <= 0) {
		currentBalance = (currentBalance)*(-1);		// Calculation makes the number positive
		cout << "Oh dear, looks like you have a negative balance of $" << currentBalance << "." << endl;
		cout << "I suggest you should spend accordingly or get a new job... If you could." << endl;
	}

	// Extra: Funny story, but I thought this is for the negative balance, so I kept doing the calculation without checking.
    // It keeps getting the same $-## so I kept doing it but to no avail. Then I realized... it was supposed to be on the top.
	else {
		cout << "Your current balance is $" << currentBalance << " after deductions." << endl;
		cout << "Great job, you have some leftover money that you can put toward to savings." << endl;
	}
	return 0;
}