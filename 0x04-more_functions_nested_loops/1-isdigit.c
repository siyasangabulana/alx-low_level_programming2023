#include "main.h"

/**
 *Is a function that checks for a digit (0 through 9)
 *@c: The number to be checked 
 * Return: 1 for a char that will be a digit or 0 else
 */

int _isdigit(int c);
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
