#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - It frees a free_listint
 * @head: Pointer to the first head
 * Return:
 */
void free_listint(listint_t *head)
{
listint_t *current;
while (head != NULL)
{
free(current);
current = head;
head = head->next;
}
}
