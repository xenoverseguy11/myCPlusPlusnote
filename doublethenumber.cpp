#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;
	x = x * 2;
	std::cout << "Double that number is: " << x << '\n';
	return 0;
}
