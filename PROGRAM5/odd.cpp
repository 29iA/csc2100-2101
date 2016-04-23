/*
	PROGRAM: odd.cpp
	AUTHOR: Cong Tuan Nguyen
	DATE: 4/22/16
	PURPOSE: Practicing writing program with various applications from Chapter 11 through 12
	STATUS: INCOMPLETE (functions.cpp for more information)
*/
#include "odd.h"

int main() 
{
	Item i_array[SIZE];
	int itemSize = 0;
	int choice;
	bool repeat = 1;
	
	// Welcome message
	cout << "WELCOME TO OBSCURA ANTIQUES & ODDITIES!\n\n";
	
	// Begin loop
	do {
		choice = menu();
		
		switch (choice) 
		{
			case 1: 
				add(itemSize, i_array); 
				break;
			case 2:
				printPopular(i_array);
				break;
			case 3:
				printItems(itemSize, i_array);
				break;
			case 4:
				saveInventory();
				cout << "Goodbye!";
				repeat = 0;
		}

	} while (repeat);
	
	return 0;
}