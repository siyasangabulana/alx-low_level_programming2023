#include "main.h"

/**
 * _memset - This program fills a block of memory with the specific value
 * @b: Desired value
 * @s: Address of memory filled
 * @n: number of bytes changed
 * Return: Array changes with new values for bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
