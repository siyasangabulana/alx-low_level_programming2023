#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *tortoise = head, *hare = head;
size_t count = 0;
while (tortoise && hare && hare->next)
{
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
tortoise = tortoise->next;
hare = hare->next->next;
if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
tortoise = tortoise->next;
hare = hare->next;
}
printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
break;
}
count++;
}
return (count);
}
