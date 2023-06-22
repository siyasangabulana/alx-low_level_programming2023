include "main.h"

/**
 *It the function that prints the numbers, from 0 to 9, followed by a new line.
 * return: a number isnce 0 up to 9 
 */

void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
