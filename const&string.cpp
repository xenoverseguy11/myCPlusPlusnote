
/*
CONSTANTS AND STRINGS:
constants,strings,constexpr and string_view
*/



#include <iostream>
#include <string>



int main()
{
    /*
    CONSTANTS:
    const and constexpr
    */

    int x = 5; // a non constant variable
    x = 3; // x could be modified anytime because it is not a constant
    const int y{ 4 }; // a constant variable, it cannot change its value upon initialization
    constexpr int p{ 5 }; // a constant-expr variable

    /*
    STRINGS:
    string and string_view
    */

    std::cout << "Hello World!" << '\n'; // "Hello World!" is a C style string literal
    std::string stringy{ "string" }; // this is a variable of string type, from the header <string>
    stringy = "modified string"; // unlike c style strings, with the modern string, you can assign!
    // for strings, use std::getline instead of std::cin with std::ws

   

    
    return 0;
}

/*


SUMMARY

*/

//a constant is a read only value, meaning it never changes upon its initialization
//a constexpr is 100% compile-time, meaning the data is only calculated at compile-time, and not when you launch a executable
//in order for a constexpr variable to initialize with a function call, the function must be a constexpr too
//a string is an expensive data type in C++
//a string is used for any text based thing
