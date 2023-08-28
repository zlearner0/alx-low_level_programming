#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - add node at list start
 * @head: pointer to existing node
 * @n: the int value inside the struct
 * Return: pointer to newly added point
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
{
return (NULL);
}
new->n = n;
if (!new->n)
return (NULL);
new->next = *head;
*head = new;
return (new);
}
