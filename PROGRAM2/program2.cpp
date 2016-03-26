/*
	PROGRAM: program2.cpp
	AUTHOR: Cong Tuan Nguyen
	DATE: 3/1/2016
	PURPOSE: Playing MASH, where users are given questions to answer
			 in order to "predict" the future.
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	

	int randomInt, choice;								// randomInt = random integer, choice is for menu
	int num1, num2, num3, num4, num5, num6;				// num1 through num6 used for inputs of integers

	randomInt = choice = num1 = num2 = num3 = num4 = num5 = num6 = 0;	// Assign to 0 for safe-keeping
	
	bool play = 0;										// play variable set to false before do-while statement
	
	// respective strings, divided for better listing.
	
	string people1, people2, people3;					// people1-3 = 3 people chosen by user
	string place1, place2, place3;						// place1-3 = 3 places chosen by user
	string job1, job2, job3;							// job1-3 = 3 jobs chosen by user
	string compTitle1, compTitle2, compTitle3;			// comp1-3 = 3 company or restaurant titles chosen by user
	string car1, car2, car3;							// car1-3 = 3 cars chosen by user
	

	// Start of do-while loop
	do {
		
		srand((unsigned)time(0));

		// Menu
		cout << "Input respective number from the following menu:" << endl
		<< "1. Play M.A.S.H.\n"
		<< "2. End Program.\n";
		cin >> choice;
	
		// loop check function
		while (choice != 1 && choice != 2) {
			cout << "Invalid choice, please input 1 or 2 for the respective menu option:\n"
			<< "1. Play M.A.S.H.\n"
			<< "2. End Program.\n";
			cin >> choice;
		}

		switch (choice) {
			case 1: play = true;
					cout << "Let\'s get started on playing M.A.S.H.!\n\n";
					break;
			case 2: cout << "Thank you for playing!\n";
					return 0;
		}

		// beginning of Q&A, BRACE YOURSELF FOR BAD CODING HABITS! (I think)
		
		// person
		cout << "Enter in a person that you fancy: ";
		cin.ignore();
		getline (cin,people1);
		cout << "Enter in another person you like: ";
		getline (cin,people2);
		cout << "Enter in a person that you dislike: ";
		getline (cin,people3);
		cout << endl;
		
		// choosing number
		cout << "Enter three numbers between 1 and 100, separated by SPACE or ENTER.\n";
		cin >> num1 >> num2 >> num3;
		cout << endl;
		// check statement
		while (num1 < 1 || num1 > 100) {
			cout << "The first number you entered is invalid.\n" << "Enter a number between 1 and 100.\n";
			cin >> num1;
			cout << endl;
		}
		while (num2 < 1 || num2 > 100) {
			cout << "The second number you entered is invalid.\n" << "Enter a number between 1 and 100.\n";
			cin >> num2;
			cout << endl;
		}
		while (num3 < 1 || num3 > 100) {
			cout << "The third number you entered is invalid.\n" << "Enter a number between 1 and 100.\n";
			cin >> num3;
			cout << endl;
		}

		// living
		cout << "Enter in one city, state you like: ";
		cin.ignore();
		getline (cin,place1);
		cout << "Enter in another city, state you like: ";
		getline (cin,place2);
		cout << "Enter in one city, state you dislike: ";
		getline (cin,place3);
		cout << endl;
		
		// job title
		cout << "Enter a job title that appeals to you: ";
		getline (cin,job1);
		cout << "Enter in another job title that you would want: ";
		getline (cin,job2);
		cout << "Enter in a job title that you don\'t want to have: ";
		getline (cin,job3);
		cout << endl;
		
		// company
		cout << "Enter in a company, supermarket, or restaurant that you like: ";
		getline (cin,compTitle1);
		cout << "Enter in another company, supermarket, or restaurant that you like: ";
		getline (cin,compTitle2);
		cout << "Enter in a company, supermarket, or restaurant that you dislike: ";
		getline (cin,compTitle3);
		cout << endl;
		
		// choosing number, pt.2
		cout << "Enter three numbers between 10,000 and 500,000, separated by SPACE or ENTER.\n";
		cin >> num4 >> num5 >> num6;
		cout << endl;
		// check statement
		while (num4 < 10000 || num4 > 500000) {
			cout << "The first number you entered is invalid.\n" << "Enter a number between 10,000 and 500,000.\n";
			cin >> num4;
			cout << endl;
		}
		while (num5 < 10000 || num5 > 500000) {
			cout << "The second number you entered is invalid.\n" << "Enter a number between 10,000 and 500,000.\n";
			cin >> num5;
			cout << endl;
		}
		while (num6 < 10000 || num6 > 500000) {
			cout << "The third number you entered is invalid.\n" << "Enter a number between 10,000 and 500,000.\n";
			cin >> num6;
			cout << endl;
		}
		
		// cars
		cout << "Enter in a specific car that you like: ";
		cin.ignore();
		getline (cin,car1);
		cout << "Enter in another specific car that you like: ";
		getline (cin,car2);
		cout << "Enter in a specific car that you dislike: ";
		getline (cin,car3);
		cout << endl;
		
		// end of Q&A
		
		
		// Displaying Results stage
		cout << endl;
		cout << "****** M.A.S.H. RESULTS ******\n";
		// First result printed (housing)
		randomInt = rand() % 4 + 1;
		switch (randomInt) {
			case 1: cout << "You will live in a mansion.\n";
					break;
			case 2: cout << "You will live in an apartment.\n";
					break;
			case 3: cout << "You will live in a shack.\n";
					break;
			case 4: cout << "You will live in a house.\n";
		}
		
		// Second result printed (marrying to)
		randomInt = rand() % 3 + 1;
		switch (randomInt) {
			case 1: cout << "You will be married to " << people1 << "." << endl;
					break;
			case 2: cout << "You will be married to " << people2 << "." << endl;
					break;
			case 3: cout << "You will be married to " << people3 << "." << endl;
		}
		
		// Third result printed [children (lotsa lovemaking I tell you hwat)]
		randomInt = rand() % 3 + 1;
		switch (randomInt) {
			case 1: cout << "You and your spouse will have " << num1 << " children." << endl;
					break;
			case 2: cout << "You and your spouse will have " << num2 << " children." << endl;
					break;
			case 3: cout << "You and your spouse will have " << num3 << " children." << endl;
		}
		
		// Fourth result printed (city living)
		randomInt = rand() % 3 + 1;
		switch (randomInt) {
			case 1: cout << "You will live in " << place1 << "." << endl;
					break;
			case 2: cout << "You will live in " << place2 << "." << endl;
					break;
			case 3: cout << "You will live in " << place3 << "." << endl;
		}
		
		// Fifth result printed (work environment)
		randomInt = rand() % 3 + 1;
		if (randomInt == 1) {
			randomInt == rand() % 3 + 1;
			switch (randomInt) {
				case 1: cout << "You will work at " << compTitle1 << " as a " << job1 << " making $" << num4 << "." << endl;
						break;
				case 2: cout << "You will work at " << compTitle1 << " as a " << job1 << " making $" << num5 << "." << endl;
						break;
				case 3: cout << "You will work at " << compTitle1 << " as a " << job1 << " making $" << num6 << "." << endl;
			}
		}
		if (randomInt == 2) {
			randomInt == rand() % 3 + 1;
			switch (randomInt) {
				case 1: cout << "You will work at " << compTitle2 << " as a " << job2 << " making $" << num4 << "." << endl;
						break;
				case 2: cout << "You will work at " << compTitle2 << " as a " << job2 << " making $" << num5 << "." << endl;
						break;
				case 3: cout << "You will work at " << compTitle2 << " as a " << job2 << " making $" << num6 << "." << endl;
			}
		}
		if (randomInt == 3) {
			randomInt == rand() % 3 + 1;
			switch (randomInt) {
				case 1: cout << "You will work at " << compTitle3 << " as a " << job3 << " making $" << num4 << "." << endl;
						break;
				case 2: cout << "You will work at " << compTitle3 << " as a " << job3 << " making $" << num5 << "." << endl;
						break;
				case 3: cout << "You will work at " << compTitle3 << " as a " << job3 << " making $" << num6 << "." << endl;
			}
		}
		
		// Sixth result printed (car)
		randomInt = rand() % 3 + 1;
		switch (randomInt) {
			case 1: cout << "You will drive a " << car1 << ".\n\n";
					break;
			case 2: cout << "You will drive a " << car2 << ".\n\n";
					break;
			case 3: cout << "You will drive a " << car2 << ".\n\n";
		}
		
	} while (play == true);
	
	return 0;
}
