/*
	PROGRAM: CubScout.cpp
	AUTHOR: Cong Tuan Nguyen
	DATE: 4/15/16
	PURPOSE: Practicing Chapter 11 with struct
*/
#include <iostream>
#include <string>
using namespace std;

struct CubScout
{
	string name;
	int schoolGrade;
	string denName;
};

// Function Prototypes
CubScout *makeArray(int);		// Array is CubScout pointing to?
void enterCubScouts(CubScout*, int);
void printCubScouts(CubScout*, int);

int main()
{
	CubScout * scoutArray;		// CubScout is pointing to scoutArray (declare statement)
	int scoutNum;
	
	cout << "\nHow many cub scouts are in your pack?\n";
	cin >> scoutNum;
	cout << endl << endl;
	
	scoutArray = makeArray(scoutNum);
	enterCubScouts(scoutArray, scoutNum);
	printCubScouts(scoutArray, scoutNum);
	
	delete [] scoutArray;
	return 0;
}

// Function Definitions

/* Function: CubScout *makeArray(int scoutNum)
   Purpose: Dynamically allocates an array based on the datatype of CubScout? */
CubScout *makeArray(int scoutNum)
{
	CubScout * array;
	array = new CubScout[scoutNum];
	return array;
}

/* Function: void enterCubScout(CubScout * scoutArray, int scoutNum)
   Purpose: Asking user to enter data into structure */
void enterCubScout(CubScout * scoutArray, int scoutNum)
{
	for (int x=0;x<scoutNum;x++)
	{
		cin.ignore();			// cin used
		cout << "CUB SCOUT " << x+1 << ":\n"
			<< "Name: ";
		getline(cin, scoutArray[x].name);
		cout << "GRADE (1-5): ";
		cin >> scoutArray[x].schoolGrade;
		cout << "DEN NAME: ";
		cin.ignore();
		getline(cin, scoutArray[x].denName);
		cout << endl;
	}
	
	cout << "-------------------------------------------------------";
}

/* Function: void printCubScout(cubScout * scoutArray, int scoutNum)
   Purpose: Print the recorded data from scoutArray */
void printCubScout(CubScout * scoutArray, int scoutNum)
{
	for (int x=0;x<scoutNum;x++)
	{
		cout << "CUB SCOUT " << x+1 << endl;
		cout << "NAME: " << scoutArray[x].name << endl;
		cout << "GRADE (1-5): " << scoutArray[x].schoolGrade << endl;
		cout << "DEN NAME: " << scoutArray[x].denName << endl << endl;
	}
}