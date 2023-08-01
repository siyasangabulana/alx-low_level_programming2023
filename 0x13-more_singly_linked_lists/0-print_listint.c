#include "lists.h"

/**
 * print_listint - To prints all linked lists
 * @h: Pointer to the first list_t lists
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
