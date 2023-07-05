#include "main.h"

int _sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - Helper function to calculate the square root using binary
 * @n: The number to calculate the square root of.
 * @start: The start of the search range.
 * @end: The end of the search range.
 * Return: The results square root
 */

int _sqrt_helper(int n, int start, int end)
{
int mid;
if (start <= end)
{
mid = (start + end) / 2;
if (mid *mid == n)
{
return (mid);
}
else if (mid *mid > n)
{
return (_sqrt_helper(n, start, mid - 1));
}
else
{
return (_sqrt_helper(n, mid + 1, end));
}
}
return (end);
}
