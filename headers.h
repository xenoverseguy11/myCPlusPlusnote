
/*

HEADER FILES

*/

#ifndef ADD // header guards
#define ADD
int add(int x, int y); // function declaration
#endif 


/*
WHAT ARE HEADERS FOR?
*/

// imagine you are writing a program, and you split the logic for whatever you are writing
// into different source files, you wanted to use them into your main application, you would use forward declarations
// however forward declarations arent trivial, imagine if the code has many functions you wanted to use, then you'd have to forward declare
// every single of them, thus the reason why headers exist, headers only let you to include them and let you use all of their functions
// without having to declare them multiple times

/*
RECCOMENDATION: use #pragma once instead, it offers the same purpose but on a single line!, and even less error prone
*/
