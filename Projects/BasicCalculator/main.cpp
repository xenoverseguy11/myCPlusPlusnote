#include <iostream>
#include <string.h>

int Add(int x, int y);
int Sub(int x, int y);
int Mult(int x, int y);
int Div(int x, int y);



int main()
{
	std::cout << "-----CALCULATOR----- \n";
	std::cout << "get started by typing : \n";
	std::cout << "+ for addition \n";
	std::cout << "- for subtraction \n";
	std::cout << "x for multiplication \n";
	std::cout << "/ for division \n";
	
	int number1;
	int number2;
	char choice;

	std::cin >> choice;

	if (choice == '+')
	{
		std::cout << "Enter two integers to add: ";
		std::cin >> number1 >> number2;
		std::cout << "The result is " << Add(number1, number2);
	}
	else if (choice == '-')
	{
		std::cout << "Enter two integers to subtract: ";
		std::cin >> number1 >> number2;
		std::cout << "The result is " << Sub(number1, number2);
	}
	else if (choice == 'x')
	{
		std::cout << "Enter two integers to multiply: ";
		std::cin >> number1 >> number2;
		std::cout << "The result is " << Mult(number1, number2);
	}
	else if (choice == '/')
	{
		std::cout << "Enter two integers to multiply: ";
		std::cin >> number1 >> number2;
		std::cout << "The result is " << Div(number1, number2);
	}
	else
	{
		std::cout << "Invalid!";
	}

	return 0;
}
