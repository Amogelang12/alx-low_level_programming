#include <stdio.h>
#include <ctype.h>

/**
 *main -is the entry point for c program
 *
 *Return:zero if no error, Non-zero value  if errors
 */

int main(void)
{
char al;

for (al = 'a' ; al <= 'z' ; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
