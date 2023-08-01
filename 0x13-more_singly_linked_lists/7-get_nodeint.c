#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node of a listint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to find
 * Return: Pointer to the node, or NULL node is empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;
while (current != NULL)
{
if (count == index)
return (current);
else
count++;
current = current->next;
}
return (NULL);
}
