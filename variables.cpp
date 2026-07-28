#include <iostream>

int main()
{
	/*
	VARIABLES:
	DEFINITION AND ASSIGNMENT
	*/


	int num1; // definition of a variable
	num1 = 7; // assignment of a variable
	std::cout << num1 << '\n'; // prints the num1 variable
	num1 = 4; //reassignment of a variable
	std::cout << num1 << '\n'; // prints our change of the num1 variable

	/*
	VARIABLES:
	INITIALIZATION
	*/

	int a = 1; // the copy initialization of another variable 
	int b(1); //direct initialization of another variable
	int c{ 4 }; // uniform/list initialization of another variable, it does not allow narrow conversion

	/*
	VARIABLES:
	C++17: MAYBEUNUSED ATTRIBUTE
	*/

	[[maybe_unused]] int d{ 5 }; // maybe_unused attribute is used to fix the problem of compiler complaining that a variable is never used


	/*
	VARIABLES QUESTIONS
	*/

	// WHAT IS THE DIFFERENCE BETWEEN INITIALIZATION AND ASSIGNMENT?
	// ANSWER: initialization creates and gives the variable a initial value, while assignment assigns a value to a variable that has already been created
	return 0;
}
