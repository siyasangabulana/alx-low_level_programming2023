#include "lists.h"

/**
 * listint_len - Counts the number of listint_t list
 * @h: Pointer  head of the lists
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h != NULL)
{
nodes++;
h = h->next;
}
return (nodes);
}
