#include <stdio.h>
#include <string.h>
#include "two_fer.h"

void two_fer(char *buffer, const char *name)
{
   if(name == NULL || strlen(name) == 0)
   {
      sprintf(buffer, "One for you, one for me.");
   }
   else
   {
         // Example: if name = "Reese", output will be:
         // One for Reese, one for me.
      sprintf(buffer, "One for %s, one for me.", name);
   }
}
