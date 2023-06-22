#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
    int i, j;

    /* Outer loop to print the numbers ten times */
    for (i = 0; i < 10; i++)
    {
        /* Inner loop to print numbers from 0 to 14 */
        for (j = 0; j <= 14; j++)
        {
            /* Check if the number is greater than 9 to print the tens digit */
            if (j > 9)
                _putchar((j / 10) + '0');

            /* Print the ones digit */
            _putchar((j % 10) + '0');
        }

        /* Print a new line character */
        _putchar('\n');
    }
}
