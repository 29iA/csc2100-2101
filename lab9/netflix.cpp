/*
	TITLE:		jellybean.cpp
	AUTHOR:		Cong Tuan Nguyen
	DATE:		3/29/16
	PURPOSE:	
*/
// #include "jellybean.h"		// This is for jellybean.h
#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
int* makeArray(int);
int getStudentData(int*, int);
void getAverage(int*, int);
void selectionSort(int*, int);
void printArray(int*, int);
void getMedian(int*, int);

int main()
{
	int size;		
	
	cout << "How many students were surveyed? ";
	cin >> size;
	cout << endl << endl;
	
	makeArray(size);
	getStudentData(array, size);
	getAverage(array, size);
	// selectionSort(array, size);
	printArray(array, size);
	getMedian(array, size);
}

/*
*****************
* 	Function	*
*	Definition	*
*****************
*/

// Dynamically allocated array creation
int* makeArray(int size)
{
	int *array;					// Declare a pointer array of type int
	array = new int[size];		// Assign array to a dynamically located array size

	return array;
}

// Input data into array
int getStudentData(int *array, int size)
{
	cout << "Enter the number of hours each student spent watching Netflix.\n";
	
	for (int n=1;n<=size;n++) {
		cout << "Student " << size << ": ";
		cin >> *(array+(n-1));
	}
	
	for (int n=1;n<=size;n++) {
		cout << *(array+(n-1)) << endl;
	}
}

// Calculate and display average of inputs
void getAverage(int *array, int size)
{
	
}

// Pre-defined function that sorts hours
void selectionSort(int *array, int size)
{
   int startScan, minIndex, minValue;

   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      minIndex = startScan;
      minValue = *(array+startScan);
      for(int index = startScan + 1; index < size; index++)
      {
         if (*(array+index) < minValue)
         {
            minValue = *(array+index);
            minIndex = index;
         }
      }
      *(array+minIndex) = *(array+startScan);
      *(array+startScan) = minValue;
	}
}

// Print the array in ascending order from selection sort
void printArray(int *array, int size)
{
	
}

void getMedian(int *array, int size)
{
	
}