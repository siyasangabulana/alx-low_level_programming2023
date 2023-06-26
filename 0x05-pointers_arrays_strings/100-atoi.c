#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int i = 0;
while (s[i] == ' ')
i++;
while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
int digit = s[i] - '0';
while (s[i] >= '0' && s[i] <= '9')
{
int digit = s[i] - '0';
if (num > (INT_MAX / 10) || (num == (INT_MAX / 10) && digit > (INT_MAX % 10)))
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
num = num * 10 + digit;
i++;
}
return (num * sign);
}
