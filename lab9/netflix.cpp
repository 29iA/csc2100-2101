/*
	TITLE:		jellybean.cpp
	AUTHOR:		Cong Tuan Nguyen
	DATE:		3/29/16
	PURPOSE:	Introduction to multiple file (header and function) and using pointer notation
*/
#include "netflix.h"		// This is for jellybean.h

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