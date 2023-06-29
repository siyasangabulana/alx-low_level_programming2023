#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *str)
{
int i, j;
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
{
for (j = 0; input[j] != '\0'; j++)
{
if (str[i] == input[j])
{
str[i] = output[j];
break;
}}}}
return (str);
}
