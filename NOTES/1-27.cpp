CSC 2100: Chapter 1

#include <iostream>  //pound sign = preprocessor directive - <iostream> = input/output 
using namespace std;  //(namespace defines all possible name) (std organizes the name)

int main()  //beginning of the main function (every programs start with a main function {curly braces})
{
	float hours; //
	return 0;  //return statement signifies successful end to program
}
// or /* indicates start of comment

/*
cmd commands:
 - cls = clear screen
 - g++ (name1).cpp -o (name2) = compile
 - E^C (ctrl + c) = terminate program
 
Definitions:
 - Key words = special words used for their intended purpose (the blue text) (return, double, int, bool, char, etc.)
 - Programmer-defined Variables - (X Y Z etc)
 - Answer is the equal sign (=) which is used for assigned.
 - Operators = (<, >, =, <<, >>, +, -, *) (++ = increment operators)
 - Punctuation = semicolons, curly braces, parentheses, etc.
 - Syntax = rules one must follow (semicolon at end of operation, etc.)

Variables are like boxes that contain one thing. A variable must be defined with a statement called variable definition.
 - var holds two types of data: numbers and characters
ex: int num; \\  where num = integer
 - A boolean datatype can only hold two type of data = true / false
 
Programs mainly process these three activities: Input --> Processing --> Output

The Programming Process
 - Design (purpose of program)
 - Create (write script)
 - Test (compile and run)
 - Debug (fixing syntax or logic error)
 
Procedural & Object-Oriented Programming
 - Procedural is based on functions (need to get something accomplish --> accomplish)
 - Object-Oriented?
 