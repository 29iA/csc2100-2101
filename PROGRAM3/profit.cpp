/*
	PROGRAM:	profit.cpp
	AUTHOR:		Cong Tuan Nguyen
	DATE:		3/21/16
	PURPOSE:	Calculate monthly, quarterly, highest and lowest profit by using various functions and arrays
*/

/*
	BUGS:
	1. I don't get how the repeat prompt just froze after input, it may have something to do with an escape sequence/dirty input, but I don't know how to resolve it
	2. The formatting for Quarterly Profit is, of course, shite. The console output for them is in a loop and stream manipulator doesn't do what it does. I have no idea how it works frankly.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function prototypes
void getProfit(float[], string[]);
void getTotal(float[]);
void getMax(float[], string[]);
void getMin(float[], string[]);
void getQuarterly(float[], float[], string[]);
int loop();

int main()
{
	string monthNames[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	bool repeat;								// Boolean for repeat
	
	do 
	{
		float profit[12], quarterlyProfit[4];		// Array for 12-months profit insert and another for quarterly profit calculation.

		// Functions running
		getProfit(profit, monthNames);
		getTotal(profit);
		getMax(profit, monthNames);
		getMin(profit, monthNames);
		getQuarterly(profit, quarterlyProfit, monthNames);
		
		// Ask for program to rerun
		repeat = loop();
		
	} while (repeat == true);
	
	return 0;
} 

/*
******************
*	FUNCTION	 *
*	DEFINITION   *
******************
*/

// Getting profit from user
void getProfit(float profit[], string monthNames[])
{
	int n;		// Placeholder for increment input
	
	cout << "Welcome to Flourish and Blotts Bookstore!\n\n";
	
	// Grabbing user input
	for (n=1;n<=12;n++) {
		cout << "Enter the profit for " << monthNames[n-1] << ": $";
		cin >> profit[n-1];
		
		// Input validation
		while (profit[n-1] < 0) {
			cout << "Sorry, you must enter profit greater than $0.\n"
			<< "Enter the profit for " << monthNames[n-1] << ": $";
			cin >> profit[n-1];
		}
		
	}
	
}

// Calculating profit total and display
void getTotal(float profit[])
{
	int n;						// Placeholder for increment input
	float total, average;		// Variable to put total and yearly average of 12 months
	cout << endl;
	
	// Display beautiful lines (lol)
	for (n=1;n<=160;n++)
		cout << "-";
	
	// Calculation
	for (n=1;n<=12;n++) {
		total += profit[n-1];
		average = total/n;
	}
	
	// cout << fixed is used for fixed notation, oh... Use it alongside with setprecision(2) for answer...
	// Console output
	cout << setw(35) << "TOTAL PROFIT FOR YEAR:" << setw(12) << "$" << setw(15) << fixed << setprecision(2) << total << endl;
	cout << setw(35) << "YEARLY AVERAGE PROFIT:" << setw(12) << "$" << setw(15) << fixed << setprecision(2) << average << endl;

}

// Calculating max profit and display
void getMax(float profit[], string monthNames[])
{
	int n;								// Placeholder for increment input
	float largestProfit = 0;			// Variable to put largest profit month in
	string monthDisplay;				// Variable to display when calculation is finished
	
	// Calculation
	for (n=1;n<12;n++) {
		if (profit[n-1] > profit[n]) {
			if (profit[n-1] > largestProfit) {
				largestProfit = profit[n-1];
				monthDisplay = monthNames[n-1];
			}
			else {}
		}

		else if (profit[n] > largestProfit) {
			largestProfit = profit[n];
			monthDisplay = monthNames[n];
		}
		else {}
	}
	
	// Console output
	cout << setw(35) << "MONTH WITH LARGEST PROFIT:" << left << setw(12) << "" << monthDisplay << " totaling $" << fixed << setprecision(2) << largestProfit << endl;
}

// Calculating min profit and display
void getMin(float profit[], string monthNames[])
{
	int n;								// Placeholder for increment input
	float smallestProfit = profit[0];  	// Sentient variable to be replaced
	string monthDisplay;				// Variable to display when calculation is finished
	
	// Calculation
	
	for (n=1;n<12;n++) {
		if (profit[n-1] < profit[n]) {
			if (profit[n-1] <= smallestProfit) {
				smallestProfit = profit[n-1];
				monthDisplay = monthNames[n-1];
			}
			else {}
		}

		else if (profit[n] < smallestProfit) {
			smallestProfit = profit[n];
			monthDisplay = monthNames[n];
		}
		else {}
	}
	
	// Console output
	cout << right << setw(35) << "MONTH WITH SMALLEST PROFIT:" << left << setw(12) << "" << monthDisplay << " totaling $" << fixed << setprecision(2) << smallestProfit << endl;
}

// Calculating quarterly profit and display
void getQuarterly(float profit[], float quarterlyProfit[], string monthNames[])
{
	int n, m;							// Placeholder for increment input
	
	// Display beautiful lines (lol)
	for (n=1;n<=80;n++)
		cout << "-";
	
	// Calculation
	for (n=0;n<=3;n++) {
		m = n*3;
		quarterlyProfit[n] = profit[m] + profit[m+1] + profit[m+2];
	}
	
	// Console output
	cout << right << setw(50) << "QUARTERLY PROFITS\n";
	for (n=0;n<=3;n++) {
		m = n*3;
		cout << setw(20) << ""
		<< monthNames[m] << " - " << monthNames[m+2] 
		<< left << setw(16) << "" << "$" 
		<< setw(15) << fixed << setprecision(2) << quarterlyProfit[n] << endl;
	}
	
		// Display beautiful lines (lol)
	for (n=1;n<=160;n++)
		cout << "-";
	
	cout << endl << endl;
}

// Repeat
int loop()
{
	char choice;
	bool repeat;
	
	cout << "Would you like to run this program again? (Y/N): ";
	cin.ignore();
	cin >> choice;
		
	while ( (choice != 'y') && (choice != 'n') && (choice != 'Y') && (choice != 'N') )
		cout << "Invalid choice. Would you like to run this program again? (Y/N): ";
		cin.ignore();
		cin >> choice;
		
	if ( (choice == 'y') || (choice == 'Y') )
		repeat = true;
	else
		repeat = false;
	
	return repeat;
}