#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string to be printed
 *
 * Description: This function takes a pointer to a string and prints
 * the string character by character until it reaches the null character (`'\0'`).
 * It then prints a new line character (`'\n'`).
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}

_putchar('\n');
}
