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
double getAverage(int*, int);
void selectionSort(int*, int);
void printArray(int*, int);
double getMedian(int*, int);

int main()
{
	int size, m, n;
    double average, median;
    int *array;
    
	cout << "How many students were surveyed? ";
	cin >> size;
	cout << endl;
	
	array = makeArray(size);
	getStudentData(array, size);
	average = getAverage(array, size);
	selectionSort(array, size);
    printArray(array, size);
	median = getMedian(array, size);
	
	// Formatting for cout
	for (n=1;n<=2;n++) {
		for (m=1;m<=40;m++) {
			cout << "-";			
		}
		cout << endl;
	}
	cout << setw(29) << "NETFLIX STATISTICS" << endl;
	for (n=1;n<=40;n++)
		cout << "-";
	cout << endl << endl;
	cout << setw(20) << "Average: " << average << endl
	<< setw(20) << "Median: " << median << endl;
	for (n=1;n<=2;n++) {
		for (m=1;m<=40;m++) {
			cout << "-";			
		}
		cout << endl;
	}
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
	
	for (int n=0;n<size;n++) {
		cout << "Student " << n+1 << ": ";
		cin >> *(array + n);
	}
}

// Calculate and display average of inputs
double getAverage(int *array, int size)
{
    int total = 0, average = 0;
    
	for (int n=1;n<=size;n++) {
        total += *(array + (n-1));
    }
    
    average = total / size;
    return average;
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
	cout << endl << endl;
    cout << "Hours each student watched Netflix in ascending order:\n";
		
    for (int n=0;n<size;n++)
        cout << *(array + n) << " ";
	
	cout << endl << endl;
}

double getMedian(int *array, int size)
{
	int median, median2, n;			// Median2 is used as another median when they divide
	double medDouble;				// Median stored for when needed to be a double
	
	n = size % 2;
	if (n != 0)
		median = (size / 2);
	else {
		median = (size / 2) - 0.5;
		median2 = (size / 2) + 0.5;
	}
	
	if (n != 0)
		return *(array + median);
		
	else {
		medDouble = *(array + median) + *(array + median2);
		medDouble = medDouble/2;
		return medDouble;
	}
}