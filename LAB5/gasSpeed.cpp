/*
	PROGRAM:	gasSpeed.cpp
	AUTHOR:		Cong Tuan Nguyen
	DATE:		2/18/16
	PURPOSE:	Calculating the distance of a gas traveling at a set time
				using switch and if/else statement.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Assigning three variables for holding.
	int choice;
	float second, distance;

	// Outputting basic prompts.
	cout << "The speed of sound in gases depends primarily on the density of gas.\n\n";
	cout << "Choose a gas below:" << endl;
	cout << "1. Carbon Dioxide\n"
	<< "2. Air\n"
	<< "3. Helium\n"
	<< "4. Hydrogen\n"
	<< "CHOOSE 1-4: ";
	
	// Assign input to choice.
	cin >> choice;
	cout << endl;
	
	// Checking the input if it's out of range or in range.
	if (choice < 1 || choice > 4) {
		cout << "Invalid choice.\nCHOOSE 1-4: ";
		cin >> choice;
		cout << endl;
	}

	// Switch statement for choice made, all grouped into one.
	switch (choice) {
		case 1:
		case 2:
		case 3:
		case 4: cout << "Enter the number of seconds it took for the sound to travel in this gas from its source to the location at which it was detected.\n";
				cin >> second;
				cout << endl;
				break;
	// Extra codes for giggles, ignore this :D
		default: cout << "Didn't I tell you to input number in that range you imbecile? I have yet to learn about looping yet!"; return 0;
	}

	// Checking if the input is out of range or in range.
	if (second < 0 || second > 30) {
		cout << "Invalid time. Choose a time between 0 and 30 seconds.\nSECONDS: ";
		cin >> second;
		cout << endl;
	}

	// Switch statement for choice made, this time including the seconds.
	switch (choice) {
		case 1: distance = 258.0 * second;
				cout << "The carbon dioxide was " << distance << " meters away from the detection location!";
				break;
		case 2: distance = 331.5 * second;
				cout << "The air was " << distance << " meters away from the detection location!";
				break; 
		case 3: distance = 972.0 * second;
				cout << "The helium was " << distance << " meters away from the detection location!";
				break;
		case 4: distance = 1270.0 * second;
				cout << "The hydrogen was " << distance << " meters away from the detection location!";
				break;
	// Extra codes for giggles, ignore this :D
		default: cout << "Didn't I tell you to input number in that range you imbecile? I have yet to learn about looping yet!"; return 0;
	}
	cout << endl;
	return 0;
}