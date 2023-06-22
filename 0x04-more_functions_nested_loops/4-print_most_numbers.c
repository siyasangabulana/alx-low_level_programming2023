#include "main.h"

/*
 *this function that prints the numbers, from 0 to 9, followed by a new line.
 *Description:It does not print 2 and 4
 *Return: The number 0 up to 9
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}

