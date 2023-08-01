#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of the data listint_t linked list
 * @head: Pointer to the head of the list
 * Return: Sum of the list, or 0 is empty
 */

int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
