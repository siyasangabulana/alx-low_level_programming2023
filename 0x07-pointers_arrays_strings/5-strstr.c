#include "main.h"
#include <stddef.h>

/**
 * _5-strst - check the code
 *@haystack: input
 *@needle: input
 *Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
while (*haystack)
{
char *haystack_ptr = haystack;
char *needle_ptr = needle;
while (*haystack_ptr && *needle_ptr && *haystack_ptr == *needle_ptr)
{
haystack_ptr++;
needle_ptr++;
}
if (*needle_ptr == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
