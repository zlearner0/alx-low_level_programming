#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: the pointer of old head
 * @n: node data
 * Return: pointer to end node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *current;
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
 /* reach last node*/
current = (*head);
while (current)
{
if (!current->next)
break;
current = current->next;
}
/*filling the new node as last node*/
new->next = NULL;
new->prev = current;
new->n = n;
/* set new as head if old head is null */
if (!current)
(*head) = new;
/*set next in case we have only one node*/
else if (!current->next) /*head next is null*/
current->next = new;
return (new);
}
