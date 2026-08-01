
/*

BIT MANIPULATION

*/


#include <bitset>
#include <iostream>

int main()
{
	std::bitset<8> de{ 0b0000'0000 }; // a 8 bit bitset, positions look like 0b7654'3210
	// the bitset feature allows to manipulate bits
	// it consists of 4 member functions:
	//test() allows us to test whether a bit is 0 or 1
	//set() sets a bit to become 1
	//flip() flips a bit to be the opposite(if the bit was 1 it becomes 0 and if 0 becomes 1)
	//reset() resets the bit to become 0
	constexpr int isWalking{ 5 };
	constexpr int isRunning{ 3 };
	de.set(isWalking); // sets bit position 5 to become 1, this becomes 0010'0000
	std::cout << "setting position 5 to 1: " << de << '\n';
	de.set(isRunning); // sets bit position 3 to become 1, this becomes 0010'1000
	std::cout << "setting position 3 to 1: " << de << '\n';
	de.flip(isRunning); // flips bit position 3 to become the opposite, this becomes 0010'0000
	std::cout << "flipping position 3: " << de << '\n';

	/*
	BITWISE OPERATORS:
	// we will use 4 bits for our examples:

	left shift: x << n, the bits from x are moved left by n positions, for example, x is 6(0110) and n is 1, it becomes 1100
	right shift: x >> n the bits from x are moved right by n positions, for example, x is 6(0110) and n is 1, it becomes 0011
	bitwise not:    each bit from x is flipped, for example 0101, becomes 1010
	bitwise and: 	each bit is set when both corresponding bits in x and y are 1. for example, x & n, x = 0111, n = 1010, so it becomes  0010
	bitwise or: each bit is set when either corresponding bit in x and y is 1. for example x = 0101 n = 0000 so it becomes 0101
	bitwise xor: each bit is set when the corresponding bits in x and y are different.

	*/

	std::bitset<4> x{ 0b0110 };
	std::cout << "bitset before left shift: " << x << '\n';
	std::cout << "bitset after left shift:  " << (x << 1) << '\n'; // moved left by 1, becomes 1100
	std::cout << "bitset after right shift: " << (x >> 1) << '\n'; // moved right by 1, becomes  0011
	std::cout << "bitset after NOT operator: " << ~x << '\n'; // flips 0110, to 1001
	std::cout << "bitset after OR operator: " << (std::bitset<4>{0b0100} | std::bitset<4>{0b0010}) << '\n'; 
	/*
	0100 |
	0010
	: 0110
	// any 1 creates a 1
	*/
	std::cout << "bitset after AND operator: " << (std::bitset<4>{0b0001} & std::bitset<4>{0b0101}) << '\n'; 
	/*
	0110 &
	0010
	: 0010
	// if there are no matching 1's then its a 0
	*/
	std::cout << "bitset after XOR operator: " << (std::bitset<4>{0b0001} xor std::bitset<4>{0b1000}) << '\n';



	
}


/*

no summary, this lesson is very hard for me, most of the time you'd just use it to save bytes

*/
