/*
	PROGRAM:
	AUTHOR:
	DATE:
	PURPOSE:
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
int getTotal(string[], int[]);
void posOfLargest(string[], int[]);
void posOfSmallest(string[], int[]);

int main()
{
	string types[] = {"mild","medium","sweet","hot","zesty"};
	int sales[5];
	int total;		// Variable to transfer total to other functions
	
	// Intro
	cout << "PEPPER PALACE!\n\n"
	<< "Please tell me the number of jars sold for each type of salsa.\n\n";
	
	total = getTotal(types, sales);
	
	// Output
	cout << endl << "   Salsa Sales Report\n\n"
	<< "Name" << setw(22) << "Jars Sold\n";
	for (int n=0;n<25;n++)
		cout << "-";
	cout << endl;
	
	for (int n=0;n<5;n++)
		cout << types[n] << "			" << sales[n] << endl;
	
	cout << endl << "Total Sales: " << "		" << total << endl;
	
	posOfLargest(types, sales);
	posOfSmallest(types, sales);
	
}

/*
*****************
*  Function		*
*  Definition	*
*****************
*/

// Calculate total
int getTotal(string types[], int sales[])
{
	int total = 0;					// Hold variable for later return
	for (int n=0;n<5;n++) {
		cout << "Jars sold last month of " << types[n] << "	: ";
		cin >> sales[n];
		total += sales[n];
	}
	return total;
}

// Calculate largest number of jars sold
void posOfLargest(string types[], int sales[])
{
	int currentLargestSales = sales[0];		// Hold comparison variable for largest
	string bigSalsa = types[0];						// Hold variable for corresponding string that spits out from array
	
	// Comparison
	for (int n=0;n<5;n++) {
		if (sales[n] > currentLargestSales) {
			currentLargestSales = sales[n];
			bigSalsa = types[n];
		}
	}
	
	cout << "Higher Seller: " << bigSalsa << endl;
}

// Calculate smallest number of jars sold
void posOfSmallest(string types[], int sales[])
{									
	int currentSmallestSales = sales[0];	// Hold comparison variable for smallest
	string littleSalsa = types[0];						// Hold variable for corresponding string that spits out from array
	
	for (int n=0;n<5;n++) {
		if (sales[n] < currentSmallestSales) {
			currentSmallestSales = sales[n];
			littleSalsa = types[n];
		}
	}
	
	cout << "Low Seller: " << littleSalsa << endl;
}