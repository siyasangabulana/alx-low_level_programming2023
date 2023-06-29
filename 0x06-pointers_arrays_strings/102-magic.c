#include "main.h"
#include <stdio.h>

int _putchar(char c);
/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
if (n < 0) {
_putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}
int main(void)
{
int a[5] = {0, 1, 98, 3, 4};
int *p;

p = &a[2];
printf("a[2] = %d\n", *p);
print_number(98);
_putchar('\n');
print_number(402);
_putchar('\n');
print_number(1024);
_putchar('\n');
print_number(0);
_putchar('\n');
print_number(-98);
_putchar('\n');
return (0);
}
