#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be printed
 *
 * Description: This function takes a pointer to a string and prints
 * the characters of the string in reverse order until it reaches the null
 * character ('\0'). It then prints a new line character ('\n').
 */

void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
length++;

while (length > 0)
{
length--;
_putchar(s[length]);
}
_putchar('\n');
}
