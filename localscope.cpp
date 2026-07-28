#include <iostream>

/*
THE LOCAL SCOPE
*/

int main()
{
	int x = 3; // x gets created here
	std::cout << x << '\n'; // printing x
	return 0;
} // x dies here.

//Thats it! thats the note!

/*
SUMMARY
*/
  
//local scope is code between the pair of curly braces
//variables defined in on between a pair of curly braces are local variables
//at the end of the curly brace, the local variable dies
