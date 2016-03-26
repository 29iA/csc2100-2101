/* This is some codes to execute just for creating a story */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// vars defined
	char choice;
	
	// procedures
	cout << "Let\'s get started shall we? (y/n)\n";
	cin >> choice;
	if ( choice == 'n' ) {
		return 0;
	}
	else {
		cout << "Actually never mind I have no idea what to do\n";
		return 0;
	}
}