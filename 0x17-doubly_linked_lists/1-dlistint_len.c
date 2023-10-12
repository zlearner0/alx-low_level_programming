#include "lists.h"

/**
 * dlistint_len - count the list members
 * @h: the pointer to node
 * Return: no. of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
