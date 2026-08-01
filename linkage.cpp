#include <iostream>

/*
INTERNAL AND EXTERNAL LINKAGE

*/


// variables with internal linkage are invisible from the linker
// variables with external linkage are visible from the linker

int xpo = 2; // global variables have external linkage by default

static int xop = 5; // this is a variable with internal linkage, normally global variables have external linkage, you can grant them
// internal linkage with the static keyword

const int conston = 1; // constants are internal by default
constexpr int exper = 3; // like constants, constexprs are also internal
extern const int constont = 9; // constants are internal by default, meaning you'd have to use the extern keyword
extern constexpr int experont = 4; // like constants

static int add(int x, int y) // functions are also external by default, like variables, you can also grant them internal linkage by using
// the static keyword
{
	return x + y;
}
// the bad side is, internal linkage variables/functions can not be accessed by other translation units
// even by headers or forward declaration, it wouldnt work


int main() // the main function actually has external linkage by default
{
	int x = 5; // this variable does not have a internal linkage nor does it have external
	// because it is initialized on a function, it dies on the last curly brace, and it dies, so the linker doesnt even know it
}

/*
USEFUL NOTES:
Scope determines where a variable is accessible. Duration determines when a variable is created and destroyed. Linkage determines whether the variable can be exported to another file or not.

Global variables have global scope (a.k.a. file scope), which means they can be accessed from the point of declaration to the end of the file in which they are declared.

Global variables have static duration, which means they are created when the program is started, and destroyed when it ends.

Global variables can have either internal or external linkage, via the static and extern keywords respectively.

*/
