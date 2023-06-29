#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @s: The string to encode
 *
 * Return: The encoded string
 */

char *rot13(char *s)
{
char *ptr = s;
while (*ptr != '\0') 
{
if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M')) 
{
*ptr = *ptr + 13;
} 
else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z')) 
{
*ptr = *ptr - 13;
}
ptr++;
}
return (s);
}
