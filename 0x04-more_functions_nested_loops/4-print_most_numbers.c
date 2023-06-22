#include "main.h"

/**
 *print_most_numbers - Prints the numbers from 0 to 9 (excluding 2 and 4), followed by a new line.
 *Convert the digit to a character and print it using _putchar 
 *Print a new line character using _putchar
 *Return: The number since 0 up to 9
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
