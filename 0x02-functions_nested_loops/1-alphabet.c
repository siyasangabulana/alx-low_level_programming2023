#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */

void print_alphabet(void)
{
char letter;
int i;

for (i = 0; i < 26; i++)
{
letter = 'a' + i;
_putchar(letter);
}

_putchar('\n');
}
