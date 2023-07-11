#include "main.h"

/**
 *_memcpy - function that copy the memory area
 *@dest: memory is stored
 *@n: number of bytes
 *@src: memory is copied
 *Return: memory that is copied with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int p = 0;
int i = n;
for (; p < i; p++)
{
dest[p] = src[p];
n--;
}
return (dest);
}
