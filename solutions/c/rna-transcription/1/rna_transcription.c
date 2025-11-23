#include <stdlib.h>
#include <string.h>
#include "rna_transcription.h"

char *to_rna(const char *dna)
{
   static char rna[256];
   if(dna == NULL)
   {
      rna[0] = '\0';
      return rna;
   }
   size_t i;
   for(i = 0; dna[i] != '\0' && i < sizeof(rna) - 1; i++)
   {
      switch(dna[i])
      {
         case 'G':
            rna[i] = 'C';
            break;
         case 'C':
            rna[i] = 'G';
            break;
         case 'T':
            rna[i] = 'A';
            break;
         case 'A':
            rna[i] = 'U';
            break;
         default:
            rna[0] = '\0';
            return rna;
      }
   }
   rna[i] = '\0';
   return rna;
}
