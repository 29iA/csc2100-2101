/*
	PROGRAM NAME: Cooking
	AUTHOR: Cong Tuan Nguyen
	LAB: 2101-001
	PURPOSE: Conversion of cooking measures with parameter
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	float cup;
	
	cout << "GOOD MORNING COMMANDER SHEPERD!\n" << "Enter the number of cups you wish to convert!" << endl;
	cin >> cup;

	cout.precision(3);
	
	cout << endl;
	cout << setw(12) << "CUPS" << setw(30) << "CONVERTS TO" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	cout << fixed << setw(12) << cup << setw(30) << cup*8 << " Fluid Ounces" << endl;
	cout << fixed << setw(12) << cup << setw(30) << cup*0.0625 << " Gallons" << endl;
	cout << fixed << setw(12) << cup << setw(30) << cup*0.236588 << " Liters" << endl;
	cout << fixed << setw(12) << cup << setw(30) << cup*236.588 << " Millileters" << endl;
	cout << fixed << setw(12) << cup << setw(30) << cup*0.5 << " Pints" << endl;
	cout << fixed << setw(12) << cup << setw(30) << cup*0.25 << " Quarts" << endl;
	cout << fixed << setw(12) << cup << setw(30) << cup*16 << " Tablespoons" << endl;
	cout << fixed << setw(12) << cup << setw(30) << cup*48 << " Teaspoons" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	return 0;
}