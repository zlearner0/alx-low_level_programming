#include "lists.h"

/**
 * add_dnodeint - add head node at start of list
 * @head: the pointer of old head
 * @n: node data
 * Return: pointer to new head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
/*filling new node*/
new->n = n;
new->prev = NULL;
new->next = (*head);
/*flip old head to next node*/
if ((*head))
(*head)->prev = new;
(*head) = new;
return (*head);
}
