#include "main.h"

/**
 * print_number - prints number char
 * @n: integers params
 * Return: 0
 */
void print_number(int n)
{
unsigned int n1;

n1 = n;
if (n < 0)
{
_putchar('_');
n1 = -n;
}
if (n1 / 10 != 0)
{
_putchar((n1 % 10) + '0');
}
}
