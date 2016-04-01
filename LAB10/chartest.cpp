/*
	PROGRAM:	chartest.cpp
	AUTHOR:		Cong Tuan Nguyen
	DATE:		3/31/16
	PURPOSE:	Reading out a file content and determine how many of various letter and digits are in.
*/
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	char array[];
	
	ifstream text;
	text.open("text.txt");
	
	text >> array;
	cout << array;
	
	return 0;
}