/*
	Title:  snack.cpp
	Author:  Cong Tuan Nguyen
	Date:  1/28/16
	Purpose:  Practice with output
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char rating;
	string snack;
	string horizontalLine(30, '-'); //creates a string called horizontalLine that contains 30 dashes
	
	// Fill in the code to do the following:
	// Assign the value of "pickles" to snack
	// Assign a grade of 'A' to rating
	snack = "pickles";
	rating = 'A';
	
	// Print out the snack & rating
	cout << "\n\nSnack: " << snack << endl;
	cout << "Rating: " << rating << endl;
	
	cout << horizontalLine << endl << endl;
	
	// Fill in the code to do the following:
	// Assign the value of "oranges" to snack
	// Assign a grade of 'C' to rating
	snack = "oranges";
	rating = 'C';
	
	//Print out the new snack & rating
	cout << "\n\nSnack: " << snack << endl;
	cout << "Rating: " << rating << endl;
	
	cout << horizontalLine << endl << endl;
	
	return 0;
}