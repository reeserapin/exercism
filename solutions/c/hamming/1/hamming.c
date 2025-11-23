#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs)
{
   // If either strand is NULL, return -1
   if (lhs == NULL || rhs == NULL)
   {
      return -1;
   }

   size_t len_lhs = strlen(lhs);
   size_t len_rhs = strlen(rhs);

   // Check if both strings are empty
   if (len_lhs == 0 && len_rhs == 0)
   {
      return 0;
   }

   // If lengths differ (including when one is empty and the other isn't), return -1
   if (len_lhs != len_rhs)
   {
      return -1;
   }

   // Count the differences
   int distance = 0;
   for (size_t i = 0; i < len_lhs; i++) // they should be the same length at this point
   {
      if (lhs[i] != rhs[i])
      {
         distance++;
      }
   }

   return distance;
}
