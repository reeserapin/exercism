#include "roman_numerals.h"
#include <stdlib.h>

char *to_roman_numeral(unsigned int number)
{
    unsigned int amount;
    char *romanNumeral = calloc(7, sizeof(char));
    unsigned int index = 0;

    if(number >= 1000)
    {
        amount = (number/1000);

        for(index = 0; index < amount; index++)
        {
            romanNumeral[index] = 'M';
        }
        number %= 1000;
    }
    if (number >= 100)
    {
        amount = (number/100);
            if(amount == 9)
            {
                romanNumeral[index++] = 'C';
                romanNumeral[index++] = 'M';
            }
            else if (amount >= 5)
            {
                romanNumeral[index++]= 'D';
                for (unsigned int i = 0; i < amount - 5; i++)
                {
                    romanNumeral[index++]= 'C';
                }
            }
            else if (amount == 4)
            {
                romanNumeral[index++]= 'C';
                romanNumeral[index++]= 'D';
            }
            else if (amount >= 1)
            {
                for (unsigned int i = 0; i < amount; i++)
                {
                    romanNumeral[index++]= 'C';
                }
            }
            number %= 100;
    }
    if (number >= 10){
        amount = (number/10);
        if (amount == 9)
        {
            romanNumeral[index++]= 'X';
            romanNumeral[index++]= 'C';
        }
        else if (amount >= 5)
        {
            romanNumeral[index++]= 'L';
            for (unsigned int i = 0; i < amount - 5; i++)
            {
                romanNumeral[index++]= 'X';
            }
        }
        else if (amount == 4)
        {
            romanNumeral[index++]= 'X';
            romanNumeral[index++]= 'L';
        }
        else if (amount >= 1)
        {
            for (unsigned int i = 0; i < amount; i++)
            {
                romanNumeral[index++]= 'X';
            }
        }
        number %= 10;
    }
    if(number >= 1)
    {
        amount = number;
        if(amount == 9)
        {
            romanNumeral[index++]= 'I';
            romanNumeral[index++]= 'X';
        }
        else if(amount >= 5)
        {
            romanNumeral[index++]= 'V';
            for (unsigned int i = 0; i < amount - 5; i++)
            {
                romanNumeral[index++]= 'I';
            }
        }
        else if(amount == 4)
        {
            romanNumeral[index++]= 'I';
            romanNumeral[index++]= 'V';
        }
        else if(amount >= 1)
        {
            for (unsigned int i = 0; i < amount; i++)
            {
                romanNumeral[index++]= 'I';
            }
        }
    }

    return romanNumeral;
}
