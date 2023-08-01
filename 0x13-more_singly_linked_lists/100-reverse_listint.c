#include "lists.h"

/**
 * reverse_listint - It Reverses a listin_t
 * @head: Pointer to the head of the list
 * Return: head (Successfully)
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
