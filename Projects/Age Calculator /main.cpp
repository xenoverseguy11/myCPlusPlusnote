#include <iostream>
#include "age.h"
#include "input.h"

int main()
{
	std::cout << "------Age Calculator------ \n";
	std::cout << "type the year you were born in \n";
	int birthYear{};
	birthYear = getYear(birthYear);
	std::cout << "You are " << calculateAge(birthYear) << " years old \n";
	

}
