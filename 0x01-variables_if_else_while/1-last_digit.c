#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *main -is the entry point for c program
 *
 *Return:zero if no error, Non-zero value  if errors
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int b;

srand(time(0));
n = rand() - RAND_MAX / 2;
b = n % 10;
if (b > 5)/* your code goes there */
{
printf("Last digit of %d is %d and is greater than 5\n", n, b);
}
else if (b == 0)
{
printf("Last digit of %d is %d and is 0\n", n, b);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
}
return (0);
}
