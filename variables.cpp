#include <iostream>

int main()
{
	int num1; // definition of a variable
	num1 = 7; // assignment of a variable
	std::cout << num1 << '\n'; // prints the num1 variable
	num1 = 4; //reassignment of a variable
	std::cout << num1 << '\n'; // prints our change of the num1 variable
	// now lets talk about initialization

	int a = 1; // the copy initialization of another variable 
	int b(1); //direct initialization of another variable
	int b{ 4 }; // uniform/list initialization of another variable
	
	return 0;
}