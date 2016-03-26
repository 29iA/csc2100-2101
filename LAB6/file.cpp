/*
	PROGRAM: file.cpp
	AUTHOR: Cong Tuan Nguyen
	DATE: 2/25/2016
	PURPOSE: Insert 1 through 10 into a document and ask again.
	ERROR: Document not written through
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	// Initializing variables, including output file.
	int x;
	char choice;
	ofstream outFile;

	do {
		cout << "Getting ready to write numbers 1 through 10 to output.txt...\n\n";
		outFile.open("output.txt");
		for (x = 1; x == 10; x++) {
			outFile << x;
		}
		outFile.close();
		cout << "The numbers 1 through 10 have been successfully written to output.txt.\n\n"
		<< "Do you want to run the program again? (y/n)\n";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');
	return 0;
}