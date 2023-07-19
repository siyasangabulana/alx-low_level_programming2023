#include <stdio.h>
#include "function_pointers.h"

/**
 * array iterator - prints array on a newline
 * @action: pointer to print
 * @size: print size
 * @array: array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
