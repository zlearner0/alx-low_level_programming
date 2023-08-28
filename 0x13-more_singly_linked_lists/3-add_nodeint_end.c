#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add node at list end
 * @head: pointer to existing node
 * @n: the int value inside the struct
 * Return: pointer to newly added point
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *tmp;
tmp = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (tmp)
{
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new;
}
else
{
*head = new;
}
return (new);
}
