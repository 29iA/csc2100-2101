/*
	PROGRAM: odd.cpp
	AUTHOR: Cong Tuan Nguyen
	DATE: 4/22/16
	PURPOSE: Practicing writing program with various applications from Chapter 11 through 12
*/
#include "odd.h"

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

// function Add
// Purpose: Get data from file or user input
// BUGS: itemSize not incrementing, text file does not display properly
void add(int itemSize, Item * i_array) 
{
	int c;				// Choice variable
	int itemAdded;
	char filename[20];
	float tempNum;		// Number input
	string temp;		// File input
	
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
		cin >> filename;
		cout << endl;
		
		// ifstream inFile(filename);
		ifstream inFile(filename);
		
		if (!inFile.fail()) 
		{
			while (!inFile.eof())
			{
				itemSize++;
				itemAdded++;
				
				getline(inFile, temp, '#');
				i_array[itemSize].name = temp;
				
				getline(inFile, temp, '#');
				i_array[itemSize].description = temp;
				
				// Translating into float from string
				getline(inFile, temp, '#');
				i_array[itemSize].cost.goods_price = stringToFloat(temp);
				
				getline(inFile, temp, '#');
				i_array[itemSize].cost.sale_price = stringToFloat(temp);
				
				getline(inFile, temp, '#');
				i_array[itemSize].cost.profit = stringToFloat(temp);
				
				for (int num=0;num<12;num++) 
				{
					getline(inFile, temp, '#');
					i_array[itemSize].popularity[num] = stringToFloat(temp);
				}
				
				getline(inFile, temp, '#');
				i_array[itemSize].day.month = stringToFloat(temp);
				
				getline(inFile, temp, '#');
				i_array[itemSize].day.day = stringToFloat(temp);
				
				getline(inFile, temp, '#');
				i_array[itemSize].day.year = stringToFloat(temp);
				
			}
			cout << "A total of " << itemAdded << " entries have been added to the program " << filename << endl << endl;
			
			inFile.close();
		}
		else
			cout << "ERROR: File non-existent.\n\n";
	}
	else if (c == 2)
	{
		cout << "Please enter the item details below:\n\n";
		
		// Asking for Name
		cout << "NAME: ";
		cin.ignore();
		getline(cin, temp);
		i_array[itemSize].name = temp;
		cout << endl;
		
		// Asking for Desc
		cout << "DESCRIPTION: ";
		getline(cin, temp);
		i_array[itemSize].description = temp;
		cout << endl;
		
		// Asking for Retail Price
		cout << "RETAIL PRICE OF GOODS (what the store paid for it): $";
		cin >> tempNum;
		i_array[itemSize].cost.goods_price = tempNum;
		cout << endl;
		
		// Asking for Sale Price
		cout << "SALE PRICE (what the store selling it for): $";
		cin >> tempNum;
		i_array[itemSize].cost.sale_price = tempNum;
		cout << endl;
		
		// Calculation for Profit
		i_array[itemSize].cost.profit = i_array[itemSize].cost.sale_price - i_array[itemSize].cost.goods_price;
		
		// Asking for Popularity
		cout << "ENTER THE POPULARITY OF THE ITEM FOR EACH MONTH\n"
			<< "1 = unpopular, 10 = extremely popular\n\n";
		
		for (int num=0;num<12;num++)
		{
			cout << "MONTH " << num+1 << ": ";
			cin >> tempNum;
			cout << endl;
			
			while ( (tempNum < 1) || (tempNum > 10) )
			{
				cout << "Invalid! The number has to be 1-10!\n\n"
					<< "MONTH " << num+1 << ": ";
				cin >> tempNum;
			}
			
			i_array[itemSize].popularity[num] = tempNum;
		}
		
		// Asking for Month Acquired
		cout << "MONTH ACQUIRED (mm): ";
		cin >> tempNum;
		i_array[itemSize].day.month = tempNum;
		cout << endl;
		
		// Asking for Day Acquired
		cout << "DAY ACQUIRED (mm): ";
		cin >> tempNum;
		i_array[itemSize].day.day = tempNum;
		cout << endl;
		
		// Asking for Year Acquired
		cout << "YEAR ACQUIRED (mm): ";
		cin >> tempNum;
		i_array[itemSize].day.year = tempNum;
		cout << endl;
		
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
// BUGS: It prints stuff out, but doesn't work. Darn it.
void printPopular(Item * i_array) 
{
	int monthInput;				// Choice variable
	int PopularItem;			// Value for getting the right array
	float currentNum;			// Goat value for storing
	float mostPopular = 0;		// Most popular choice
	
	// Asking for months
	cout << "What month would you like to investigate? (1-12)\n";
	cin >> monthInput;
	cout << endl;
	
	// Input validation
	while ( (monthInput < 1) || (monthInput > 12) )
	{
		cout << "Invalid number! ONLY 1-12: ";
		cin >> monthInput;
	}
	
	// Going through the whole array
	for (int m=0;m<SIZE;m++)
	{
		currentNum = i_array[m].popularity[monthInput-1];
		
		if (currentNum >= mostPopular)
		{
			mostPopular = currentNum;
			PopularItem = m;
		}
		// If anything reaches 10, then automatically say it's the biggest
		if (mostPopular = 10)
		{
			PopularItem = m;
			break;
		}
	}
	
	// Printing out statements
	cout << "The most popular item for month " << monthInput << " is:\n";
	
	cout << "NAME: " << i_array[PopularItem].name << endl << endl
		<< "DESCRIPTION: " << i_array[PopularItem].description << endl << endl
		<< "GOODS PRICE: $" << i_array[PopularItem].cost.goods_price << endl << endl
		<< "SALE PRICE: $" << i_array[PopularItem].cost.sale_price << endl << endl
		<< "POPULARITY PER MONTH:\n";
	
	for (int m=0;m<12;m++)
	{
		cout << setw(5) << right << "MONTH " << m+1 << ": " 
			<< i_array[PopularItem].popularity[m] << endl;
	}
	
	cout << endl;
	cout << "ACQUIRE DATE: " 
		<< i_array[PopularItem].day.month << "/" << i_array[PopularItem].day.day << "/"
		<< i_array[PopularItem].day.year << endl << endl;
	
}

// function PrintItems
// Purpose: Self-explanatory, print 'em all in an orderly manner
// BUGS: Due to itemSize not incrementing, this fails to work ;-;
void printItems(int itemSize, Item * i_array) 
{
	cout << "ALL ITEMS:\n\n";
	
	cout << itemSize;
	
	// Beware of long code (it's too late now though isn't it?)
	for (int n=0;n<itemSize;n++)
	{
		for (int l=0;l<40;l++)
		{
			cout < "-";
		}
		cout << setw(40) << "ITEM " << n+1 << endl;
		
		cout << "NAME: " << i_array[n].name << endl << endl
			<< "DESCRIPTION: " << i_array[n].description << endl << endl
			<< "GOODS PRICE: " << i_array[n].cost.goods_price << endl << endl
			<< "SALE PRICE: " << i_array[n].cost.sale_price << endl << endl
			<< "PROFIT: " << i_array[n].cost.profit << endl << endl
			<< "POPULARITY PER MONTH: ";
		
		for (int m=0;m<12;m++)
			cout << setw(5) << right << "MONTH " << n+1 << i_array[n].popularity[m] << endl;
		
		cout << "ACQUIRE DATE: " 
			<< i_array[n].day.month << "/" << i_array[n].day.day << "/"
			<< i_array[n].day.year << endl << endl;
	}
}

// function SaveInventory
// Purpose: Saving new data through a text file
// STATUS: INCOMPLETE
void saveInventory() {}