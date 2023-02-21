#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
int num1, num2;

for (num1 = 0 ; num1 <= 98 ; num1++)
{
for (num2 = num1 + 1 ; num2 <= 99 ; num2++)
{
putchar((a / 10) + '0');
			
putchar((a % 10) + '0');
putchar(' ');
putchar((b / 10) + '0');
putchar((b % 10) + '0');

if (num1 == 98 && num2 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
