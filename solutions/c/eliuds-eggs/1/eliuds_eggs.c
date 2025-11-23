#include "eliuds_eggs.h"

// The problem asks for the number of eggs, which is defined as the number of '1' bits
// in the binary representation of the given number. This is also known as the Hamming weight.
// One way to solve this is by repeatedly checking the least significant bit (using number & 1).
// If the bit is set, we increment the count. Then, we shift the number right by one bit (number >>= 1),
// which discards the bit we've just checked and moves the next bit into the least significant position.
// This process continues until all bits have been checked and the number becomes zero.

// Example:
// For number = 13 (binary 1101):
// Iteration 1: number = 13 (1101), least bit is 1 -> count = 1
// Iteration 2: number = 6  (0110), least bit is 0 -> count = 1
// Iteration 3: number = 3  (0011), least bit is 1 -> count = 2
// Iteration 4: number = 1  (0001), least bit is 1 -> count = 3
// Iteration 5: number = 0, loop ends. Final count = 3
unsigned int egg_count(unsigned int number)
{
	unsigned int count = 0;
	while (number)
   {
        // Add 1 to count if the least significant bit is set
		count += number & 1;
        // Shift right to check the next bit in the next iteration
		number >>= 1;
   }
	return count;
}
