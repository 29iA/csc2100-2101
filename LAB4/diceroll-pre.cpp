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
	
	switch(diceRoll)
	{
		case 1:
			cout << "You fell in a trap!\n";
			break;
		case 2:
			cout << "You lose a turn!\n";
			break;
		case 3:
			cout << "Roll again!\n";
			break;
		case 4:
			cout << "Move forward 1 space!\n";
			break;
		case 5:
			cout << "Move forward 2 spaces!\n";
			break;
		case 6:
			cout << "You win the game!\n";
			break;
		default:
			cout << "Invalid dice roll.  Try again.\n";
	}
	
	return 0;
}