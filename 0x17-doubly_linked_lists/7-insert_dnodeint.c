#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: reference to head
 * @idx: specified index
 * @n: added node integer data
 * Return: pointer to added node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *current = (*h);
unsigned int count = 0;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
while (current && count < idx - 1)
{
current = current->next;
count++;
}
if (!current)
{
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (!new)
{
return (NULL);
}
new->n = n;
new->prev = current;
new->next = current->next;
if (current->next)
{
current->next->prev = new;
}
current->next = new;
return (new);
}
