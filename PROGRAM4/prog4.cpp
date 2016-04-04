/*
	PROGRAM:
	AUTHOR:
	DATE:
	PURPOSE:
*/
// #include "prog4.h"		// Header file
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Function Prototypes
int showMenuGetChoice();
string * createStringArray(int);
void getInfoFromUser(string&, string&, int);
void printStory();

int main()
{
	int choice = 0, size = 0;
	string *qArray;				// Pointer to question array
	string *aArray;				// Pointer to answer array
	
	choice = showMenuGetChoice();
	
	ifstream file;				// Declare input file to read
	switch(choice) 
	{
		case 1:	
			file.open("starWars.txt");
			break;
		case 2:	
			file.open("dog.txt");
			break;
		case 3:
			file.open("pirate.txt");
			break;
		case 4: return 0;
	}
	file >> size;
	qArray = createStringArray(size);
	getInfoFromUser(qArray, aArray, size);
	// array = createStringArray();
}

// Function Definition

// Showing menu and get user choice from menu
int showMenuGetChoice()
{
	int choice = 0;
	
	// Menu
    cout << "Let's Play some MADLIBS!\n\nChoose a MADLIBS game:\n";
    cout << "1. The Power of the Force (Star Wars Mad Libs)\n"
         << "2. Dog Days (Dog Ate My Mad Libs)\n"
         << "3. Talk Like a Pirate (Pirates Mad Libs)\n"
         << "4. END GAME\n\n";
    cout << "CHOOSE 1-4:  ";
	
	cin >> choice;
	
	// Input Validation
    while ( (choice < 1) || (choice > 4) ) {
		cout << endl << "Invalid choice you dickwad.";
        cin >> choice;        
    }
	
	return choice;
}

// Create dynamically allocated string array for later use
string * createStringArray(int size)
{
	string *arr;
	arr = new string[size];
	return arr;
}

void getInfoFromUser(string &qArr, string &aArr, int size)
{
	
}

void printStory()
{
	
}