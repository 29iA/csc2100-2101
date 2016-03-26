/*
	PROGRAM FOUR:	Color Mixing
	AUTHOR:			Cong Tuan Nguyen
	DATE:			2/11/2016
	DESCRIPTION:	This program will ask the user to choose two colors
					from red, blue, and yellow and attempt to mix
					them into secondary colors such as purple, green,
					or orange.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Declaring input variables where color1 is the first color input and color2 is second.
	string color1;
	string color2;

	// Asking user to enter info needed
	cout << "Enter the name of two primary colors from this list (red, blue, yellow)." << endl
	<< "Separate each with a space." << endl;
	
	// Now both strings are assigned
	cin >> color1 >> color2;
	cout << endl;
	
	// This if statement checks if both color inputs are not correct, then it'll display Invalid variables
	if ((color1 != "red" && color1 != "yellow" && color1 != "blue") && (color2 != "red" && color2 != "yellow" && color2 != "blue")) {
		cout << "Invalid variables! One of the colors you entered is not a primary color!\n";
		return 0;
	}
	
	else if (color2 != "red" && color2 != "yellow" && color2 != "blue") {
		cout << "Invalid second variable! Your first color entered is not a primary color!\n";
		return 0;
	}

	else if (color1 != "red" && color1 != "yellow" && color1 != "blue") {
		cout << "Invalid first variable! Your first color entered is not a primary color!\n";
		return 0;
	}

	if (color1 == "red" && color2 == "blue") {
		cout << "Red and blue makes purple!\n";
	}
	else if (color1 == "red" && color2 == "yellow") {
		cout << "Red and yellow makes orange!\n";
	}
	else if (color1 == "blue" && color2 == "yellow") {
		cout << "Blue and yellow makes green!\n";
	}
	else if (color1 == "blue" && color2 == "red") {
		cout << "Blue and red makes purple!\n";
	}
	else if (color1 == "yellow" && color2 == "red") {
		cout << "Yellow and red makes orange!\n";
	}
	else if (color1 == "yellow" && color2 == "blue") {
		cout << "Yellow and blue makes green!\n";
	}
	else if (color1 == "red" && color2 == "red") {
		cout << "Red and red makes... red.\n";
	}
	else if (color1 == "yellow" && color2 == "yellow") {
		cout << "Yellow and yellow makes... yellow.\n";
	}
	else if (color1 == "blue" && color2 == "blue") {
		cout << "Blue and blue makes... blue.\n";
	}
	return 0;
}