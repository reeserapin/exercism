#include "raindrops.h"
#include <stdio.h>
#include <string.h>

void convert(char result[], int drops)
{
	int pos = 0;
	if (drops % 3 == 0)
   {
		strcpy(result + pos, "Pling");
		pos += 5;
	}
	if (drops % 5 == 0)
   {
		strcpy(result + pos, "Plang");
		pos += 5;
	}
	if (drops % 7 == 0)
   {
		strcpy(result + pos, "Plong");
		pos += 5;
	}
	if (pos == 0)
   {
		sprintf(result, "%d", drops);
	}
   else
   {
		result[pos] = '\0';
	}
}
