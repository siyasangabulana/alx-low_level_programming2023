#include "main.h"

/**
 *_strchr - Entry point
 *@c:input value
 *@s:input value
 *Return: 0 Always
 */

char *_strchr(char *s, char c)
{
int a = 0;
for (; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (&s[a]);
}
return (0);
}
