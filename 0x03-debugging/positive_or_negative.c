#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *positive_or_negative -is the entry point for c program
 *i : integer
 *if the number is greater than 0: is positive, if the number is 0: is zero
 *if the number is less than  0: is negative, folowed by a new line
 *Return:zero if no error, Non-zero value  if errors
 */
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else 
printf("%d is zero\n", i);
}
