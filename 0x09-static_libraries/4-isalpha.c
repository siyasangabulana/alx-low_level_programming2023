#include "main.h"

/**
 *_isalpha - checks for alphabetic characters
 *@c: charaacters to be checked
 *Return: 1 if c is an Alphabet, 0 else
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'));
}
