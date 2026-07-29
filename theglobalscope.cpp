
/*
GLOBAL SCOPE
*/

int foo(int boo, int doo); // Is a global declaration, usually, function declarations are mostly global.

int x; // Is a global variable, but discouraged, because it is available on the global and use const

int y{ 5 }; // Is also a global variable , like x


int main() // also a global definition
{
	int x; // is NOT a global variable, this is a local
	int y{ 5 }; // is NOT a global variable, this is also local
	return 0;
}

/*
SUMMARY
*/

//GLOBAL SCOPE IS THE VERY TOP AREA
//ANYTHING DEFINED OR DECLARED ON GLOBAL SCOPE IS CONSIDERED GLOBAL

