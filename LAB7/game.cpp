/*
	PROGRAM: game.cpp
	AUTHOR: Cong Tuan Nguyen
	DATE: 3/3/16
	PURPOSE: Playing Rock, Paper, and Scissor with functions and menu
*/
#include <iostream>
#include <string>
using namespace std;

// Create function 
int gameMenu();
int userChoice(int);
void compChoice(int);
void chooseWinner();
void displayWinning();

int main() {
	
	int uChoice;			// Choice player made in gameMenu() function
	int cChoice;			// Choice computer made in compChoice() function
	
	gameMenu();
	userChoice(cChoice);
}

/*
**********************
*   FUNCTION         *
*   DEFINITION       *
*                    *
**********************
*/

int gameMenu() {
	// Local variable
	int choice;
	
	cout << "Game Menu\n" << "********\n"
	<< "1. Rock\n" << "2. Paper\n" << "3. Scissors\n" << "4. Quit\n\n"
	<< "Enter your choice: ";
	cin >> choice;
	
	while ( (choice != 1) && (choice != 2) && (choice != 3) && (choice != 4) ) {
		cout << "Invalid selection, Enter 1, 2, 3, or 4: ";
		cin >> choice;
	}
	
	cout << choice;			// DEBUG
	return choice;
}

int userChoice(int uChoice) {
		
	switch (uChoice) {
		case 1: cout << "You selected: Rock\n"; break;
		case 2: cout << "You selected: Paper\n"; break;
		case 3: cout << "You selected: Scissors\n"; break;
		case 4: break;
	}
	
	cout << uChoice;		// DEBUG
	return 0;
}