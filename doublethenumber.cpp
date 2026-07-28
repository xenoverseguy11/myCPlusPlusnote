#include <iostream>

int main()
{
	std::cout << "Enter an integer: "; // prints the message
	int x; // defining variable x
	std::cin >> x; // receives value for x from the user
	x = x * 2; // changes x's value to be multiplied by 2
	std::cout << "Double that number is: " << x << '\n'; // prints the changed variable
	return 0;
}
