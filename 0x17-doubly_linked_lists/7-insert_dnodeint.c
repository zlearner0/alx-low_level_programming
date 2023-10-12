#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: reference to head
 * @idx: specified index
 *@n: added node integer data
 * Return: pointer to added node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *current = (*h);
unsigned int count = 0, isFound = 0;
current = (*h);
while (current)
{
if (count == idx - 1)
{
isFound = 1;
break;/*we break at the node just before index*/
}
current = current->next;
count++;
}
if (!isFound && count != -1)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
if (!(*h)) /*insert first node*/
{
new->n = n;
new->prev = NULL;
new->next = NULL;
(*h) = new;
}
else if (current->next)/*insert inner node*/
{
current = current->next;
new->n = n;
new->prev = current->prev;
new->next = current;
}
else/*insert last node*/
{
new->n = n;
new->prev = current;
new->next = NULL;
}
return (new);
}
