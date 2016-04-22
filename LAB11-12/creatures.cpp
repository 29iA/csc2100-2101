/*
	PROGRAM: creatures.cpp
	AUTHOR: Cong Tuan Nguyen
	DATE: 4/??/2016
	PURPOSE: File output operation, structures, and other practicess
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

//STRUCTURE DECLARATIONS
struct Cost
{
	int hours;
	float perHour;			// Cost per hour
	float food;				// Cost to buy food for a week
	float supplies;			// Cost to buy supplies
};

struct Creatures
{
	string name,
			description,
			location;
	int length,
		height;
	bool danger;
	Cost cCost;				// Variable that hold Cost struct
};

//GLOBAL CONSTANT VARIABLES
const int SIZE = 100;

//FUNCTION PROTOTYPES
void enterCreatures(int, Creatures*);
void printStatistics(int, Creatures*);
float stringToFloat(string);

int main()
{
	Creatures c_array[SIZE];
	int creaturesNum;			// Creatures variable for upkeep of current num creatures
	int choice;
	int repeat = 1;
	do 
	{
		// Menu
		cout << "What would you like to do?\n"
			<< setw(5) << "1. Enter some Magical Creatures\n"
			<< setw(5) << "2. Print Creatures\n"
			<< setw(5) << "3. Print Statistics on Creature Cost\n"
			<< setw(5) << "4. End Program\n\n"
			<< "CHOOSE 1-4: ";
		cin >> choice;
	
		while ((choice < 1) && (choice > 4))
		{
			cout << endl;
			cout << "Invalid choice, choose 1-4: ";
			cin >> choice;
		}
	
		switch(choice)
		{
			case 1:
				enterCreatures(creaturesNum, c_array);
				break;
			case 2:
				printCreatures();
				break;
			case 3:
				printStatistics();
				break;
			case 4:
				repeat = 0;
				saveInventory();
				cout << "Goodbye!\n";
		}
	} while (repeat)
}

/*************
* FUNCTION	 *
* DEFINITION *
*************/

void enterCreatures(int creatureNum, Creatures * creatureList)
{
	int choice;
	string file;			// Store filename (including extension)
	string file_input;		// Store string file input from file reading
	
	if (creatureNum >= SIZE) 
		cout << "The zoo is at full capacity so you can no longer add anymore animals.\n";
	else
	{
		// Menu
		cout << "What do you what to do?\n"
			<< setw(5) << "1. Load my creatures from a file.\n"
			<< setw(5) << "2. Enter one creature manually.\n"
			<< "CHOICE 1-2: ";
		cin >> choice;
		
		while ((choice < 1) && (choice > 3)) 
		{
			cout << "Invalid choice. CHOOSE 1-4:  ";
			cin >> c;
		}

		cout << endl << endl;
	}
	
	if (choice == 1)
	{
		// Asking for the file name
		cout << "What is the name of the file with your list off creatures? (ex: filename.txt)\n"
			<< "FILENAME: ";
		cin.ignore();
		getline(cin, file);
		
		fstream eFile;
		eFile.open(file,ios::in);
		
		if (!eFile.fail()) 
		{
			while (!eFile.eof())
			{
				// -> for calling, '.' for storing
				getline(eFile, creatureList[creatureNum].name, '#');
				getline(eFile, creatureList[creatureNum].description, '#');
				
				getline(eFile, creatureList[creatureNum].length, '#');
				getline(eFile, creatureList[creatureNum].height, '#');
				getline(eFile, creatureList[creatureNum].location, '#');
				getline(eFile, creatureList[creatureNum].dangerous, '#');
			}
			cout << "All creatures from " << file << " have been added to the program.\n";
		}
		else
			cout << "ERROR: File non-existent.\n";
	}
}

void printCreatures()
{
	
}

void saveCreaturesToFile()
{
	
}

//The printStatistics function prints out each creature and the cost associated with 
//the creature for one week.  The formula used to calculate the cost is:
// numHours * costPerHour + food + supplies.
void printStatistics(int numCreatures, Creatures* creatureList)
{
	float totalCost = 0;
	float cost;
	cout << "COST OF EACH CREATURE FOR ONE WEEK:\n\n";
	
	//print out headers
	cout << left << setw(15) << "CREATURE" << setw(5) << " " << right << setw(15) << "COST" << endl;
	
	cout << setprecision(2) << fixed << showpoint;
	
	for(int x= 0; x < numCreatures; x++)
	{
		cost = creatureList[x].creatureCost.numHours * creatureList[x].creatureCost.costPerHour + creatureList[x].creatureCost.foodCost + creatureList[x].creatureCost.materialCost;
		cout << left << setw(15) << creatureList[x].name << setw(5) << right << " $" << setw(15) << cost << endl;
		totalCost += cost;
		
	}
	cout << "\n" << left << setw(15) << "TOTAL COST:" << setw(5) << right << " $" << setw(15) << totalCost;

}

float stringToFloat(string str)
{
	float number;
	char convertStr[1000];
	strcpy(convertStr, str.c_str()); //convert the string to c-string
	
	number = atof(convertStr);
	
	return number;
}

