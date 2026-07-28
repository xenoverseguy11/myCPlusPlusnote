#include <iostream>
#include <string>

/*
FUNCTIONS:
RETURN TYPE, VOID FUNCTIONS, PARAMETERS AND ARGUMENTS
*/

void print(std::string printM) // void function and 1 parameter, voids do not return
{
	std::cout << printM;
}


int add(int x, int y) // int function and 2 int parameters, this function returns a int
{
	return x + y;
}
// the same rule applies to most data return types

int main()
{
	print("Hello World! \n"); // print("Hello World!") is an argument, it passes the information to the function's parameter

	std::cout << add(3, 5) << '\n'; // like print("Hello World!")

	return 0;
}

// UNRELATED NOTES: creating a copy of the argument to pass the information to the function is expensive, therefore I will use references
// I can implement it later once i reach that level
