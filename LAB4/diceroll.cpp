/*
	Title:  diceroll.cpp
	Author: PUT YOUR NAME HERE!!!!
	Date:  	PUT THE DATE HERE!!!!
	Purpose:  write if/else if/else statement from a switch statement
*/

#include <iostream>
using namespace std;
int main()
{
	short diceRoll;
	cout << "What did you roll?\n";
	cin >> diceRoll;
	
	if (diceRoll == 1) {
		cout << "You fell in a trap!\n";
	}
	else if (diceRoll == 2) {
		cout << "You lose a turn!\n";
	}
	else if (diceRoll == 3) {
		cout << "Roll again!\n";
	}
	else if (diceRoll == 4) {
		cout << "Move forward 1 space!\n";
	}
	else if (diceRoll == 5) {
		cout << "Move forward 2 spaces!\n";
	}
	else if (diceRoll == 6) {
		cout << "You win the game!\n";
	}
	else {
		cout << "Invalid dice roll. Try again.\n";
	}
	return 0;
}