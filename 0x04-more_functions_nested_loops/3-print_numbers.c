#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 * Loop from 0 to 9 
 * Convert the digit to a character and print it using _putchar
 * Print a new line character using _putchar
 * Return: The number since 0 up to 9 
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

