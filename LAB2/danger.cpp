/*
	Title:  danger.cpp
	Author:  Cong Tuan Nguyen
	Date:  1/28/2016
	Purpose:  Practice with output
*/
#include <iostream>
using namespace std;

int main()
{
	int numSnakes = 1000;
	int speedOfVehicle = 95;
	
	cout << "\n\nWhat is dangerous?\n\n";
	cout << "\t1. Stepping on hot coals.\n";
	cout << "\t2. Swallowing sharp objects.\n";
	cout << "\t3. Trying to pick up " << numSnakes  << " snakes.\n";
	cout << "\t4. Volcanoes\n";
	cout << "\t5. Driving " << speedOfVehicle << " miles per hour.\n";
	
	return 0;
}