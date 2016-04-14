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
	int digit = 0, upper = 0, lower = 0;
	char array;
	
	ifstream text;
	text.open("text.txt");
	
	while (!text.eof()) {
		/*
		if (isdigit(array) == true)
			digit++;
		if (isalpha(array) == true) 
		{
			if (isupper(array) == true)
				upper++;
			else
				lower++;
		}
		else {}
		*/
		cout << array;
	}
	text.close();
	cout << digit << endl << upper << endl << lower;
	return 0;
}