#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 * Return: On success, returns the character written as an unsigned char cast to an int. On error, returns -1.
 * Implementation of _putchar 
 */
int _putchar(char c);
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}
