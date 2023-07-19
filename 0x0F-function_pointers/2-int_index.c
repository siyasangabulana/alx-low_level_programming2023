#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - comparison of index
 * @size: element size in array
 * @cmp: pointer of the function
 * @array: ...
 * Return: ...
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size > 0)  
{
if (array != NULL && cmp != NULL)
{
while (i < size)
{
if (cmp(array[1]))
return(1);
i++;
}
}
}
return (-1);
}
