#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints list nodes
 * @head: pointer to first node
 * Return: no. of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
if (!head)
exit(98);
while (head != NULL)
{
printf("%i\n", head->n);
count++;
head = head->next;
}
return (count);
}
