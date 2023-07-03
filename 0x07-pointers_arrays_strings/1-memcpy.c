#include "main.h"
/**
 * _memcpy - fuction that copies a memory
 * @src:memory where is copied
 * @n:number of bytes
 * @dest:where memory is stored
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
