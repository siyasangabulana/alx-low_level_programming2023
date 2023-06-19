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
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}

putchar('\n');

return (0);
}
