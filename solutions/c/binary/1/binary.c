#include "binary.h"

int convert(const char *input)
{
   // !input: The pointer is NULL, meaning no string was provided.
   // !*input: The string is empty (the first character is the null terminator).
	if (!input || !*input)
   {
      return INVALID;
   }

	int result = 0;
   // For each character in the input string:
   // - If it's '0' or '1', update result using binary math.
   // - result = result * 2 + (current digit)
   //   This shifts previous result left (like moving to next binary place),
   //   then adds the current digit (0 or 1).
   for (const char *p = input; *p; ++p)
   {
      if (*p == '0' || *p == '1')
      {
         // Example: for "101" (binary for 5):
         // Step 1: result = 0 * 2 + 1 = 1
         // Step 2: result = 1 * 2 + 0 = 2
         // Step 3: result = 2 * 2 + 1 = 5
         result = result * 2 + (*p - '0');
      }
      else
      {
         return INVALID;
      }
   }
	return result;
}
