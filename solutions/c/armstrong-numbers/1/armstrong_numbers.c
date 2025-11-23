#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate)
{
    unsigned int candidateDigitMath = floor(log10(candidate)+1);
    unsigned int Answer = 0;
    unsigned int raisedByThePower = 0;
    
    for (unsigned int index = 0; index < candidateDigitMath; ++index){
        raisedByThePower = ((int)floor(candidate / pow(10, index)) % 10);
        Answer += pow(raisedByThePower, candidateDigitMath);
    }
    return Answer == (unsigned long) candidate;
}