#include "lists.h"

/**
 * print_dlistint - prints node data
 * @h: the pointer to node
 * Return: no. of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
if (!h)
return (0);
size_t count = 0;
while (h)
{
printf("%i\n", h->n);
count++;
h = h->next;
}
return (count);
}
