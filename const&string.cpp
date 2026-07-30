
/*
CONSTANTS AND STRINGS:
constants,strings,constexpr and string_view
*/



#include <iostream>
#include <string> // for string
#include <string_view> // C++17



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
    std::string string01{ "string" }; // this is a variable of string type, from the header <string>, this copies from its initializer like any normal variable
    std::string_view string02{ "string1" }; // this is a variable using string_view, this is read only, it doesnt copy the "string1" to its memory unlike normal string
    // 
    // however strings are expensive data type, meaning its not trivial to keep initializing your variables with it every time
    /*
    EXAMPLE:
    you call a function "print()" with a string:
    print(string01);
    the parameter from the function print() copies from the caller using the argument, this is insufficient for a data type like strings
    thats why we could use the new feature from C++ 17, string_view, both the parameter and argument should be string_view
    
    */


    //OPTIONAL: for strings, use std::getline instead of std::cin with std::ws





    return 0;
}

/*


SUMMARY

*/

//a constant is a read only value, meaning it never changes upon its initialization
//a constexpr is 100% compile-time, meaning the data is only calculated at compile-time, and not when you launch a executable
//in order for a constexpr variable to initialize with a function call, the function must be a constexpr too
//a string is an expensive data type in C++ used to replace the older c style literal
//a string_view is a less expensive read only string that doesnt copy from its initializer
//
