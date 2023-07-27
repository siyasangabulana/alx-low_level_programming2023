#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: The head of the linked list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
size_t nodes = 0;
while (h)
{
if (h->str)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
nodes++;
}
return (nodes);
}
