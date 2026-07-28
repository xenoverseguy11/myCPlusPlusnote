#include <iostream>

int main()
{
#include <iostream>

int main()
{
    /*
	THE IOSTREAM LIBRARY:
	STD::COUT, STD::CIN, STD::ENDL

	*/
	int num1;
	std::cout << "type a number" << std::endl; // std::cout : prints a text, std::endl : does a new line
	std::cin >> num1; // std::cin : receives input from the user
	std::cout << "the number you typed is " << num1 << std::endl; // uses std::cout to print the text and the modified variable "num1"
	// and uses std::endl to make a new line

	/*
	SUMMARY
	*/

	// STD::COUT : outputs/prints a text,variable and more
	// STD::CIN  : receives input from the user
	// STD::ENDL : used to make a newline

	/*
	UNRELATED QUESTIONS
	*\

	//IF THE USER TYPED A LETTER WHILE THE PROGRAM REQUESTED A NUMBER, THE PROGRAM WILL ONLY PRINT THE 0
	//IF THE USER TYPED A DOUBLE OR FLOAT-like NUMBER WHILE THE PROGRAM REQUESTED A NORMAL INT, THE PROGRAM WILL ONLY PRINT THE FIRST NUMBER, LIKE 3.5 BECOMES 3
	//IF THE USER TYPED NUMBERS WITH LETTERS(like 123po), THE PROGRAM WILL ONLY PRINT THE FIRST 3 NUMBERS


	return 0;
}
