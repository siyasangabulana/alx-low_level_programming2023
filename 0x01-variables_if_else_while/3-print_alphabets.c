#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

/* Print lowercase alphabet */
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

/*For uppercase alphabet */
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);

/*Printing a new newline character */
putchar('\n');

return (0);
}
