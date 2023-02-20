#include <stdio.h>
#include <ctype.h>

/**
 *main -is the entry point for c program
 *
 *Return:zero if no error, Non-zero value  if errors
 */

int main(void)
{
char la;

for (la = 'a' ; la >= 'z' ; la--)
{
putchar(la);
}
putchar('\n');
return (0);
}
