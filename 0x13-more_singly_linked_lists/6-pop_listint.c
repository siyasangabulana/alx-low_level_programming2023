#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: pointer to the head of the list
 * Return: The data of the deleted head node, 0 if empty
 */

int pop_listint(listint_t **head)
{
int data = 0;
listint_t *temp;
if (head == NULL || *head == NULL)
return (0);

else
temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);
return (data);
}
