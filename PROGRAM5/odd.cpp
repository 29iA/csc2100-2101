/*
	PROGRAM: odd.cpp
	AUTHOR: Cong Tuan Nguyen
	DATE: 4/22/16
	PURPOSE: Practicing writing program with various applications from Chapter 11 through 12
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Structures

// struct Money: Storing a good's original pricing
struct Money
{
	float goods_price;
	float sale_price;
	float profit;
};

// struct Date: explanatory
struct Date
{
	int month;
	int day;
	int year;
};

// struct Item: Descriptions of item and price display, storing nested struct Money and Date
struct Item
{
	string name;
	string description;
	Money cost;					// Nested struct Money
	int popularity[12];
	Date day;					// Nested struct Date
};
// Constants
const int NUM = 100;

// Function Prototypes (for odd.h)
int menu();
void add();
float stringToFloat(string);
void printPopular();
void printItems();
void saveInventory();

int main() 
{
	Item array[NUM];
	int choice;
	bool repeat;
	
	// Welcome message
	cout << "WELCOME TO OBSCURA ANTIQUES & ODDITIES!\n\n";
	choice = menu();
	do {
		switch (choice) 
		{
			case 1: 
				add(); 
				break;
			case 2:
				printPopular();
				break;
			case 3:
				printItems();
				break;
		}
		if (choice == 4)
		{
			saveInventory();
			cout << "Goodbye!";
			repeat = 0;
		}
	} while (repeat);
	
	return 0;
}

// Function Definitions

// function Menu
// Purpose: Display menu, validate user's choice, return user's choice from this function
int menu() 
{
	int c;			// Choice variable
	
	// Displaying Menu
	cout << "Please choose from the following options:\n"
		<< "1.  Add weird item(s).\n"
		<< "2.  Print most popular item.\n"
		<< "3.  Print all items.\n"
		<< "4.  End the program.\n\n";
	cout << "CHOOSE 1-4: ";
	cin >> c;
	cout << endl;
	
	// Input validation
	while (c < 1 && c > 4) 
	{
		cout << "Invalid choice. CHOOSE 1-4:  ";
		cin >> c;
	}
	
	return c;
}
void add() 
{
	int c;			// Choice variable
	
	// if (isnum())
	// Display menu (use after else clause on if/else check for array)
	cout << "Do you want to....\n"
		<< "1.  Add items from a file?\n"
		<< "2.  Add one item manually?\n"
		<< "3.  Return to main menu?\n\n"
		<< "CHOOSE 1-3: ";
	cin >> c;
	
	// Input validation
	while ((c < 1) && (c > 3)) 
	{
		cout << "Invalid choice. CHOOSE 1-4:  ";
		cin >> c;
	}
	
	if (choice == 1)
	{
	
	}
	else if (choice == 2)
	{
		
	}	
	else if (choice == 3)
	{
		
	}
	else if (choice == 4)
	{
		
	}
	else {}
}

float stringToFloat(string str)
{
	float number;
	char convertStr[1000];
	strcpy(convertStr, str.c_str());
	number = atof(convertStr);
	return number;
}

// function printPopular
// Purpose: Ask user for month, find highest popularity rating from all items, and print
void printPopular() 
{
	int c;			// Choice variable
	
	// Asking for months
	cout << "What month would you like to investigate? (1-12)\n"
	cin >> c;
}
void printItems() {}
void saveInventory() {}