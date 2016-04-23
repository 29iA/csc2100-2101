/*
	PROGRAM: odd.cpp
	AUTHOR: Cong Tuan Nguyen
	DATE: 4/22/16
	PURPOSE: Practicing writing program with various applications from Chapter 11 through 12
*/

#ifndef _ODD_H		// Defining header file
#define _ODD_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

// Constants
const int SIZE = 100;

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

// Function Prototypes (for odd.h)
int menu();
void add(int, Item*);
float stringToFloat(string);
void printPopular(Item*);
void printItems(int, Item*);
void saveInventory();

#endif						// End if statement