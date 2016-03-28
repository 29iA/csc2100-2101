/*
	TITLE:		jellybean.cpp
	AUTHOR:		Cong Tuan Nguyen
	DATE:		3/29/16
	PURPOSE:	Introduction to multiple file (header and function) and using pointer notation
*/

#ifndef _JELLYBEAN_H		// Defining header file
#define _JELLYBEAN_H

#include <iostream>
#include <iomanip>
using namespace std;

// Here Lies Regular Preprocessor Directives
int* makeArray(int);
int getStudentData(int*, int);
double getAverage(int*, int);
void selectionSort(int*, int);
void printArray(int*, int);
double getMedian(int*, int);


#endif						// End if statement