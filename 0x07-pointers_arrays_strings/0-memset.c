#include "main.h"
/**
 *_memset - it fiils a block of memory in hexa
 *@s:The address of memory to print
 *@n:number of bytes to be changed.
 *@b:desired value
 *Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
