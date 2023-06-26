#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Pointer to the string
 *
 * Description: This function takes a pointer to a string and prints
 * the second half of the string, followed by a new line. If the number
 * of characters is odd, it prints the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
int length = 0;
int i, start_index;
while (str[length] != '\0')
length++;
start_index = (length % 2 == 0) ? (length / 2) : ((length + 1) / 2);
for (i = start_index; i < length; i++)
_putchar(str[i]);
_putchar('\n');
}
