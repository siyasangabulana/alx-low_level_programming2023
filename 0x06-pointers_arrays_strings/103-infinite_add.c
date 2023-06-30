#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: Pointer to the result (r) or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k;
int carry = 0;
int len1 = 0;
int len2 = 0;
int sum = 0;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
if (len1 >= size_r || len2 >= size_r)
return (0);
i = len1 - 1;
j = len2 - 1;
k = 0;
while (i >= 0 || j >= 0 || carry != 0) 
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
r[k] = (sum % 10) + '0';
carry = sum / 10;
i--;
j--;
k++;
}
r[k] = '\0';
for (i = 0, j = k - 1; i < j; i++, j--) 
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}
return (r);
}
