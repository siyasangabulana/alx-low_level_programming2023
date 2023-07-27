#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - Count the number of elements in a list_t list
 * @h: The head of the linked list
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
size_t nodes = 0;
while (h)
{
h = h->next;
nodes++;
}
return (nodes);
}
