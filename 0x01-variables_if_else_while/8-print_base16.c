#include <stdio.h>

/**
 * main - Entry point
 *
 * It prints the lowercase alphabet in reverse, followed by a new line.
 * Only the putchar function is allowed.
 * All the code is in the main function.
 * putchar is used only twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
putchar(digit + '0');

for (digit = 0; digit < 6; digit++)
putchar(digit + 'a');

putchar('\n');

return (0);
}
