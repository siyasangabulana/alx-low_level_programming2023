#include "main.h"

/**
 *_strpbrk - Entry point
 *@accept: input values
 *@s: input values
 *Return: 0 Always
 */

char *_strpbrk(char *s, char *accept)
{
int b;
while (*s)
{
for (b = 0; accept[b]; b++)
{
if (*s == accept[b])
return (s);
}
s++;
}
return ('\0');
}
