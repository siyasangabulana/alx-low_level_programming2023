#include "main.h"

/**
 * _strspn - check the code
 *@s: input
 *@accept: input
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;

while (*s)
{
match = 0;
while (*accept)
{
if (*s == *accept)
{
match = 1;
break;
}
accept++;
}
if (match == 0)
break;
count++;
s++;
}
return (count);
}
