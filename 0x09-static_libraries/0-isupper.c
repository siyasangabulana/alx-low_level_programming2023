#include "main.h"

/*
 *_isupper - program check the upper letters
 * @c: To check char
 * Return: Uppercase 1 , else 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
