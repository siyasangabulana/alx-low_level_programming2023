#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - check the code
 *@s: input
 *@accept:input
 *Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *temp = accept;
while (*temp)
{
if (*temp == *s)
return (s);
temp++;
}
s++;
}
return (NULL);
}
