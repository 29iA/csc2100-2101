/*
	PROGRAM:
	AUTHOR:
	DATE:
	PURPOSE:
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
			location,
	int length,
		height;
	bool danger;
	Cost cData;				// Variable that hold Cost struct
}

//GLOBAL CONSTANT VARIABLES
const int SIZE = 100;

//FUNCTION PROTOTYPES
void printStatistics(int, Creatures*);
float stringToFloat(string);

int main()
{
	
}

/*************
* FUNCTION	 *
* DEFINITION *
*************/

void enterCreatures()
{
	
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

