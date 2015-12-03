//Author:Vinay Kaple
#ifndef CONVERSION_HH_
#define CONVERSION_HH_
#include <cstdlib.h>
#include <string.h>
#include <math.h>



int b2d(char *n)
{
 	int  s =0;
	int sum=0;
	int i=0;
   for(s = strlen(n)-1; s >= 0; s--)
    {

            if(n[s] == '1')
            {
            sum = sum + pow(2,i);

            }
	i++;
    }
  
   
   return  sum;
}

char *d2b(int n)
{
   int c, d, count;
   char *ptr;
 
   count = 0;
   ptr = (char*)malloc(7+1);
 
   if ( ptr == NULL )
      exit(EXIT_FAILURE);
 
   for ( c = 6 ; c >= 0 ; c-- )
   {
      d = n >> c;
 
      if ( d & 1 )
         *(ptr+count) = 1 + '0';
      else
         *(ptr+count) = 0 + '0';
 
      count++;
   }
   *(ptr+count) = '\0';

   return  ptr;
}
#endif
