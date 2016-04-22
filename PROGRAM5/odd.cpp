/*
	PROGRAM: odd.cpp
	AUTHOR: Cong Tuan Nguyen
	DATE: 4/22/16
	PURPOSE: Practicing writing program with various applications from Chapter 11 through 12
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
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
const int SIZE = 100;

// Function Prototypes (for odd.h)
int menu();
void add(int, Item*);
float stringToFloat(string);
void printPopular();
void printItems();
void saveInventory();

int main() 
{
	Item i_array[SIZE];
	int itemSize = 0;
	int choice;
	bool repeat;
	
	// Welcome message
	do {
		cout << "WELCOME TO OBSCURA ANTIQUES & ODDITIES!\n\n";
		choice = menu();
		switch (choice) 
		{
			case 1: 
				add(itemSize, i_array); 
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
void add(int itemSize, Item * i_array[SIZE]) 
{
	int c;				// Choice variable
	string file;		// Filename
	string file_input;	// File input
	
	if (itemSize >= SIZE)
		cout << "The store warehouse is full. You cannot add anymore items!\n";
	else
	{
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
		
		cout << endl << endl;
	}
	
	if (c == 1)
	{
		// Asking for the file name
		cout << "What is the name of the file with your list of items? (ex: filename.txt)\n"
			<< "FILENAME: ";
		cin.ignore();
		getline(cin, file);
		
		fstream inFile;
		inFile.open(file,ios::in);
		
		if (!inFile.fail()) 
		{
			while (!inFile.eof())
			{
				// -> for calling, '.' for storing
				getline(inFile, i_array[itemSize].name, '#');
				getline(inFile, i_array[itemSize].description, '#');
				
				getline(inFile, i_array[itemSize].cost.goods_price, '#');
				
				getline(inFile, i_array[itemSize].cost.sale_price, '#');
				
				getline(inFile, i_array[itemSize].cost.profit, '#');
			}
			cout << "All creatures from " << file << " have been added to the program.\n";
		}
		else
			cout << "ERROR: File non-existent.\n";
	
	else if (c == 2)
	{
		
	}	
	else if (c == 3)
	{
		
	}
	else if (c == 4)
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