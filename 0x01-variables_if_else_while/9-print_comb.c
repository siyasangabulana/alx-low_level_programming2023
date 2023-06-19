#include <stdio.h>

/**
 * main - Entry point
 *
 * It prints all possible combinations of single-digit numbers.
 * Numbers are separated by ", " and printed in ascending order.
 * Only the putchar function is allowed.
 * All the code is in the main function.
 * putchar is used four times maximum.
 * No variables of type char are used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0');
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
