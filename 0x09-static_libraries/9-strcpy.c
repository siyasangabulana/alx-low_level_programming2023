#include "main.h"

/**
 * _strcpy - It copies the string pointed by src
 *@src: it copy from
 *@dest: it copy to
 *Return: string value
 */

char *_strcpy(char *dest, char *src)
{
int a = 0;
int b = 0;
while (*(src + a) != '\0')
{
a++;
}
for ( ; b < a ; b++)
{
dest[b] = src[b];
}
dest[a] = '\0';
return (dest);
}
