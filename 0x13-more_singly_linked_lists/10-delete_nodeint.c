#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node that is given
 * @head: Pointer to the head of the list
 * @index: the node that should be deleted
 * Return: 1 (Successfully),or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *temp;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = temp->next;
free(temp);
return (1);
}
current_node = *head;
for (i = 0; current_node != NULL && i < index - 1; i++)
{
current_node = current_node->next;
}
if (current_node == NULL || current_node->next == NULL)
return (-1);
temp = current_node->next;
current_node->next = temp->next;
free(temp);
return (1);
}
