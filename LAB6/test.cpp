#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int x;
	ofstream outFile;
	outFile.open("test.txt");
	outFile << "Word";
	outFile.close();
	return 0;
}