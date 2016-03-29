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
string * createStringArray();
void getInfoFromUser();
void printStory();

int main()
{
	int choice = 0;
	// string *array;			// Pointer to array
	
	choice = showMenuGetChoice();
	if (choice == 0)
		cout << endl << "Bye!";
	// array = createStringArray();
}

// Function Definition

// Showing menu and get user choice from menu
int showMenuGetChoice()
{
	int choice = 0;
	
	cout << "Hi";
	return choice;
}

// Create dynamically allocated string array for later use
string * createStringArray()
{
	int *arr;
	arr = new string[1];
	return arr;
}

void getInfoFromUser()
{
	
}