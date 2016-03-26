/*
	Title:  snack.cpp
	Author:  Cong Tuan Nguyen
	Date:  1/28/16
	Purpose:  Trying to write actual program
*/
#include <iostream>
using namespace std;

int main()
{
	// Defining basic inputs (using double to include decimal digits as well)
	double townDrive = 21.5;			// townDrive = mpg driving in town
	double highwayDrive = 26.8;			// highwayDrive = mpg driving on highway
	int gallon = 20;					// gallon = 20-gal gas tank
	int distance = 0;					// distance = initiate value of distance
	
	// Processing driving in town (since distance is an integer, it'll round up the double value unless otherwise stated)
	distance = gallon * townDrive;
	// Display message
	cout << "The Acura MDX can travel " << distance << " miles if driving in town.\n";
	
	// Processing driving on highway
	distance = gallon * highwayDrive;
	// Display message
	cout << "The Acura MDX can travel " << distance << " miles if driving on the highway.";
	
	// Terminate program
	return 0;
}
