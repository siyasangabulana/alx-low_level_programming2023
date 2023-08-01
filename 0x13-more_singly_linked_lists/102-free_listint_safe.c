#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: pointer to the head of the list
 * Return: The size of the list
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *tortoise, *hare;
size_t num = 0;
if (!h || !*h)
return (0);
hare = *h;
while (hare)
{
hare = hare->next;
if (tortoise == hare)
{
hare = *h;
while (tortoise != hare)
{
tortoise = *h;
*h = (*h)->next;
free(tortoise);
num++;
}
*h = NULL;
return (num);
}
if (hare)
hare = hare->next;
if (!tortoise)
tortoise = *h;
else
tortoise = tortoise->next;
}
while (*h)
{
tortoise = *h;
*h = (*h)->next;
free(tortoise);
num++;
}
return (num);
}
