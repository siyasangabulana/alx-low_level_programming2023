#include "main.h"

/**
 *It prints function that draws a straight line in the terminal.
 *@i: The number of line
 *Return: none
 */

void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }

    _putchar('\n');
}

