#include "grains.h"

uint64_t square(uint8_t index) {
	if (index < 1 || index > 64) {
		return 0;
	}
	return 1ULL << (index - 1); // 2^(index-1)
}

uint64_t total(void) {
	// The total is the sum of grains on all 64 squares: 2^64 - 1
	return UINT64_MAX;
}

// The << operator in C is the left bitwise shift operator. It shifts the bits of the number on the left side to the left by the number of positions specified on the right side. For example, 1ULL << 3 results in 8 (binary 1000), because the bits of 1 are shifted left by 3 positions. Each shift left multiplies the value by 2.
